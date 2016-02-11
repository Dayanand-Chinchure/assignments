(define nth-element
  (lambda (lst n)
    (if (null? lst) lst
      (if (= n 0) (car lst)
	(nth-element (cdr lst) (- n 1))))))
