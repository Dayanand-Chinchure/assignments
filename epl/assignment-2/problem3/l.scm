; Replace symbol

(define substitute
(lambda (lst old new)
(if (null? lst) '()
(if (eq? (car lst) old) (cons new (substitute (cdr lst) old new))
(cons old (substitute ((cdr lst) old new)))))))
