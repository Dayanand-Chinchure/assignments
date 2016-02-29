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

;2



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


