(define (my-last lst)
  (define (check lst)
    (if (null? (cdr lst)) 
      (car lst)
      (check (cdr lst))))
  (check lst)
  )