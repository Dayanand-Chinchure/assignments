(define (natural n)
  ( if (= n 1) n
       (* n (natural (- n 1)))))
