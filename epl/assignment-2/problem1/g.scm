(define list-indices 
  (lambda (los s)
    (if (null? los) '()
	(if (eq? (car los) s) 
