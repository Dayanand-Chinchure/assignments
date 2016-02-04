(define check
  (lambda (lst)
    (if (null? lst) 0
      (+ 1 (check (cdr lst)))
      )
    ))
