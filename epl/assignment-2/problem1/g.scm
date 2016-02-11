(define c 0)
(define list-indices 
  (lambda (lst s)
    (if (null? lst) lst
      (if (eq? (car lst) s) (cons (+ c 1) (list-indices (cdr lst) s))
	(list-indices (cdr lst) s)))))
