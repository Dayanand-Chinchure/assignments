(define my-reverse 
  (lambda (lst)
    (if (null? lst) lst
      (if (null? (cdr lst)) lst
       (append (my-reverse (cdr lst)) (list (car lst)))))))
