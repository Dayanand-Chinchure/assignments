(define check
  (lambda (lst)
    (if (number? (car lst))
		 (check (cdr lst))
		 (display 'NOP))))
