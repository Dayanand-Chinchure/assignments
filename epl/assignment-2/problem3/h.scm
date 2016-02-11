(define list-number 
  (lambda (lst)
    (if (null? lst) #t
      (if (number? (car lst)) (list-number (cdr lst)) #f))))
