(define my-reverse 
  (lambda (lst)
    (if (null? lst) lst
       (append (my-reverse (cdr lst)) (list (car lst))))))

(define invert 
  (lambda (lst)
    (if (null? lst) lst
      (append (my-reverse (car lst)) (invert (cdr lst))))))
