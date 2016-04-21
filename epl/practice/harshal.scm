(define inc 
  (lambda (n)
    (+ n 1)
  ))

(define check 
  (lambda (lst)
    (if (null? lst) lst
      (cons (list (caar lst) (list (inc (caadar lst)) (car (cdadar lst)))) (check (cdr lst))))))
