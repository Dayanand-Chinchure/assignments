(define my-append 
  (lambda (lst1 lst2)
    (if (null? lst1) lst2
      (if (null? lst2) lst1
	(cons (car lst1) (my-append (cdr lst1) lst2))))))
