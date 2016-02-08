(define check
  (lambda (lst)
    (if (eq? (cdr (lst)) '()) lst
      (+ apply (car lst) (check (cdr lst)))))) 
