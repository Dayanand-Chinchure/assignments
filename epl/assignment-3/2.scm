(define check
(lambda (lst)
(if (null? lst) '()
(cons (environment-reference-type (car lst)) (check (cdr lst)))
)))
