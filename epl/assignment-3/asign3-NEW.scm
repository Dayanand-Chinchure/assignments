;-------------------------------------------------------------------------
;Occure-free?

(define occurs-free?
(lambda (var exp)
(cond
((symbol? exp) (eqv? var exp))
((eqv? (car exp) 'lambda) 
(and (not (eqv? (caadr exp) var)) (occurs-free? var (caddr exp))))
(else (or (occurs-free? var  (car exp)) (occurs-free? var (cadr exp)))))))


;-------------------------------------------------------------------------
;occurs-bound?

(define occurs-bound?
  (lambda (var exp)
    (cond
      ((symbol? exp) #f)
      ((eqv? (car exp) 'lambda)
       (or (occurs-bound? var (caddr exp))
           (and (eqv? (caadr exp) var)
                (occurs-free? var (caddr exp)))))
      (else (or (occurs-bound? var  (car exp))
                (occurs-bound? var (cadr exp)))))))

(define bound-set? 
  (lambda (lst)
     (append (list (occurs-bound? (list (car lst)) lst)) (bound-set? (cadr lst)))
    )
  )

;-------------------------------------------------------------------------
; Lexical address of the procedure

(define lexical-position
  (lambda (symbol env depth pos)
    (cond
     ((null? env) symbol)
     ((null? (car env)) (lexical-position symbol (cdr env) (+ 1 depth) 0))
     ((if (eq? (caar env) symbol) (list '$ depth pos)
     (lexical-position symbol (cons (cdar env) (cdr env)) depth (+ 1 pos)))))))

(define lexical-address
  (lambda (lst env)
    (let ((for-left  caddr)
	   (for-right cadr))
    (cond
     ((null? env) (display "env empty\n"))
     ((not (list? lst)) (lexical-position lst env 0 0))
     ((null? lst) '())
     ((eq? 'lambda (car lst)) 
      (list 'lambda 
	    (cadr lst) 
	    (lexical-address (for-left lst) (cons (for-right lst) env))))
     (else (lexical-list lst env))))))

(define lexical-list
  (lambda (lst env)
    (if (null? lst) '()
     (cons (lexical-address (car lst) env) (lexical-list (cdr lst) env)))))

;--------------------------------------------------------------------------------
;get the procedure back from lexical graph

(define unlexical-list
  (lambda (lst env)
    (cond
    ((null? lst) '())
    (else (cons (unlexical-address (car lst) env) (unlexical-list (cdr lst) env))))))

(define unlexical-address
  (lambda (lst env)
    (cond
     ((not (list? lst)) lst) ;; free!
     ((null? lst) '())
     ((eq? 'lambda (car lst)) 
      (list 'lambda (cadr lst) (unlexical-address (caddr lst) (cons (cadr lst) env))))
     ((eq? '$ (car lst))
      (lookup (cadr lst) (caddr lst) env))
     (else (unlexical-list lst env)))))

(define lookup
  (lambda (depth pos env)
    (cond
     ((and (= depth 0) (= pos 0))
      (caar env))
     ((= depth 0)
      (lookup depth (- pos 1) (cons (cdar env) (cdr env))))
     (else (lookup (- depth 1) pos (cdr env))))))

