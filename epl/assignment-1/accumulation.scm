(define (acc n y) 
  (if (= n 1) 1
    (y n (acc (- n 1) y))))
