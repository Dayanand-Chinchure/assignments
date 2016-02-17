(define my-reverse 
  (lambda (lst)
    (if (null? lst) lst
       (append (my-reverse (cdr lst)) (list(car lst))))))
