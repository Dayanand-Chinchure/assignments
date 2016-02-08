(define null '())
(define check
  (lambda (lst)
    (if (eq? lst null) lst
      (+ (car lst) (check (cdr lst)))))) 
