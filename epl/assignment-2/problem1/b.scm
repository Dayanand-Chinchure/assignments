(define my-length 
  (lambda (lst)
    (if (null? lst) 0
      (+ 1 (my-length (cdr lst))))))
