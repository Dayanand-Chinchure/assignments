;(load "../assignment-3/programs.scm")

(define normal-add
  (lambda (x y)
    (+ x y)))

(define curried-add
  (lambda (x)
    (lambda (y)
      (+ x y))))

;(normal-add 3 5)

;; written this because i was not able to pass `and` as parameter to myfold
(define my-and
  (lambda (a b)
    (and a b)))

(define myfold
  (lambda (function accumulator lst)
    (if (null? lst) accumulator
      (myfold function (function accumulator (car lst)) (cdr lst)))))


(define is-expression-grammatical-correct?
  (lambda (expression)
     (let ((lst-operators '(+ *)))
      (cond
        ((null? expression)                      #f)
        
        ((symbol? expression)                    #t)

        ((number? expression)                    (not (negative? expression)))
                                                 
                                                 ;; check if parameters are symbols only  &
        ;; abstraction                           ;; the body of abstraction is grammatically correct
        ((and (= (length expression) 3) 
              (eq? 'lambda (car expression)))    (and (myfold my-and #t (map symbol? (cadr expression)))
                                                      (is-expression-grammatical-correct? (caddr expression))))
      
        ;; num-op
        ((elem? (car expression) lst-operators)  (if (not (= (length (cdr expression)) 2)) #f
                                                      (and (is-expression-grammatical-correct? (cadr expression))
                                                           (is-expression-grammatical-correct? (caddr expression)))))

        
        ;; application
        ((= (length expression) 2)               (and (is-expression-grammatical-correct? (car expression))
                                                      (is-expression-grammatical-correct? (cadr expression))))
        
        (else                                    #f)))))

        

(define convert-lambda-abs-to-curried-form
  (lambda (expression lst-bound-vars)
    (if (null? lst-bound-vars) (caddr expression)
      (append (cons 'lambda
                    (list (car lst-bound-vars)))
              (list (convert-lambda-abs-to-curried-form expression (cdr lst-bound-vars)))))))



(define convert-to-curried-form
  (lambda (expression)
    (cond 
      ((symbol? expression)              expression)
      
      ((number? expression)              expression)
      
      ((eq? 'lambda (car expression))    (convert-lambda-abs-to-curried-form expression 
                                                                            (cadr expression)))
      
      ((or (eq? '+ (car expression))
           (eq? '* (car expression)))    (append (list (car expression))
                                                 (convert-to-curried-form (cadr expression))
                                                 (convert-to-curried-form (caddr expression))))
      
      (else                              (append (list (convert-to-curried-form (car expression)))
                                                 (list (convert-to-curried-form (cadr expression))))))))


(define return-parse-tree
  (lambda (expression)
    (let ((lst-operators '(+ *)))
     (cond
       ((symbol? expression)                    (cons 'var-exp
                                                      (list expression)))

       ((number? expression)                    (cons 'number 
                                                      (list expression)))

       ;; abstraction
       ((eq? 'lambda (car expression))          (append (list 'abs)
                                                        (list (return-parse-tree (cadr expression))
                                                              (return-parse-tree (caddr expression)))))

       ;; if <num-op>
       ((elem? (car expression) lst-operators)  (cons 'num-op 
                                                      (list (car expression)
                                                            (return-parse-tree (cadr expression))
                                                            (return-parse-tree (caddr expression)))))


       ;; application
       (else                                    (append (list 'application)
                                                        (list (return-parse-tree (cadr expression))
                                                              (return-parse-tree (caddr expression)))))))))


(define elem? 
  (lambda (a lst)
    (if (null? lst)
      (if (eq? a (car lst)) #t (elem? a (cdr lst))))))
  
(define ll '(abs (var-exp x) (abs (var-exp y) (num-op + (var-exp z) (var-exp y)))))
(define env '((x 1) (y 2) (z 3) (e 2)))
(define check-free 
  (lambda (var lst)    
     (cond
       				((eq? (car lst) 'var-exp) (eq? var (cadr lst)))
				((eq? (car lst) 'abs) (and (not (eq? var (cadadr lst))) (check-free var (caddr lst))))
				((eq? (car lst) 'num-op) (and (check-free var (caddr lst)) (check-free var (caddr lst))
	)) 
				(else (or (check-free var (cadr lst)) (check-free var (caddr lst))))     
       )))


(define parse
  (lambda (expression)
    (if (is-expression-grammatical-correct? expression) 
      (return-parse-tree (convert-to-curried-form expression))
      #f)))

(define list-free
  (lambda (lst env)
    (if (null? env) env
      (if (check-free (caar env) lst) (cons (car env) (list-free lst (cdr env))) (list-free lst (cdr env))))))

(define lookup
  (let ((free (list-free ll env)))
     (lambda (ll)
      (if (null? ll) ll
	(if (eq? (caar free) (cdr ll)) (cons (cadar free) (lookup (cddr ll))) (cons (car ll) (lookup (cdr ll))))))))
