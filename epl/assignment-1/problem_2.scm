(define (ifact num)
  (define (iter-fact n count acc)
    (if (= (+ n 1) count)
      acc
      (iter-fact n (+ count 1) (* acc count))
      )
    )
  (iter-fact num 1 1)
  )



;(define (rfact num)
;  (if (= num 0)
;    1
;    (* num (rfact (- num 1)))))
