(define (my-flatten lst)
  (cond 
    ((null? lst) '())
    ((pair? (car lst))
     (append (my-flatten (car lst)) (my-flatten (cdr lst))))
    (else (cons (car lst) (my-flatten (cdr lst))))))
