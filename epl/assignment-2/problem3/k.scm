(define remove-all
  (lambda (lst s)
    (if (null? lst) lst
      (if (eq? (car lst) s) (remove-all (cdr lst) s)
	(cons (car lst) (remove-all (cdr lst) s) )))))
