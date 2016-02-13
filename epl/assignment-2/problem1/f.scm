(define list-index 
  (lambda (s los)
    (if (null? los) 0
      (if (eq? (car los) s) (cons )
	  (+ 1 (list-index s (cdr los)))))))
