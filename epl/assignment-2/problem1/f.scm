(define c 0)
(define list-index 
  (lambda (s los)
    (if (null? los) los
      (if (eq? (car los) s) 0 
	  (+ 1 (list-index s (cdr los)))))))
