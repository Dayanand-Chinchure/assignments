(define succ (lambda (n) (if(= n 0) 0 (+ n 1))))
(define pred (lambda (n) (if(= n 0) 0 (- n 1))))
(define is-zero (lambda (n) (if (= n 0) #t #f)))

(define add 
(lambda (a b) 
(if (is-zero a) b 
(add ((pred b) (succ a)))
)))

