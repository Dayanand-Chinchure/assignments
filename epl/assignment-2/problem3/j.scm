(define remove-first
  (lambda (lst s)
    (if (null? lst) lst
      (if (eq? (car lst) s) (append (cdr lst))
	(cons (car lst) (remove-first (cdr lst) s))))))
