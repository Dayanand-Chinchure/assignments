(define emp '())

(define gen
  (lambda (n)
    (if (= n 0) emp
      (



(define (sum n)
  (define (gen n)
    (if (= n 0) 0 (+ n (gen (- n 1)))))
  (gen n)
  )
  
