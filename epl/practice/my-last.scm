(define my-last
	(lambda (lst)
      (my-last (if (null? (car lst)) (car lst) (my-last (cdr lst))))
  ))
