;Data Abstraction Exercise
(define is-zero (lambda (n) (if (= n 0) 0 (display 'No))))
(define succ (lambda (n) (+ n 1)))
(define pred (lambda (n) (- n 1)))
;------------------------------------------------------------------------
;1

(define succ (lambda (n) (if(= n 0) 0 (+ n 1))))
(define pred (lambda (n) (if(= n 0) 0 (- n 1))))
(define is-zero (lambda (n) (if (= n 0) #t #f)))

(define add
(lambda (a b)
(if (is-zero a) b
(succ (add (pred a) b))
)))

(define mult
(lambda (a b)
(if (= a 0) 0 (add (mult (pred a) b) b))))

(define fact
(lambda (n)
(if (= n 1) 1
(mult n (fact (- n 1))))))

;-------------------------------------------------------------------------
;2 split two list procedure
(define split-two-list
(lambda (lst)
(if (null? lst) '()
(cons (caar lst) (append (split-two-list (cdr lst)) (list (cdar lst)))))))
;-------------------------------------------------------------------------

;3 desugar let procedure
(define dir "( lambda")

(define get-list (lambda (lst1)
(if (null? lst1) '() (cons (cadr lst1) (get-list (cdr lst1))))))

(define desugar-let
(lambda (lst)
(if (null? lst) '()
(if (eq? (car lst) 'let) (append (get-list (cdr lst)) (desugar-let (cdr lst)))
(desugar-let (cdr lst))))))

;-------------------------------------------------------------------------
;4. Count Occurence of symbol in nested list

(define (my-flatten lst)
    (cond
          ((null? lst) '())
              ((pair? (car lst))
                   (append (my-flatten (car lst)) (my-flatten (cdr lst))))
                  (else (cons (car lst) (my-flatten (cdr lst))))))

(define count-occurence
    (lambda (s lst)
      (define lst1 (my-flatten lst))
            (if (null? lst1) 0
                (if (eq? (car lst1) s) (+ 1 (count-occurence s (cdr lst1)))
                    (count-occurence s (cdr lst1))))))

;-------------------------------------------------------------------------
;1. Substitute the old lits with new list in resultant lits

(define substitute 
(lambda (lst old new)
(if (null? lst) '()

;-------------------------------------------------------------------------
;5. Path from root
(define path
(lambda (n lst)
(if (null? lst) '()
(cond (
(if (< (car lst) n) (cons 'right (path n (caddr lst)))
(cons 'left (path n (cadr lst)))))))))
