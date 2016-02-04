(define (fun n lista)
  (define (calc n result lista)
    (if (= n 0) result
      (calc (- n 1) ( + result (car lista)) (cdr lista))))
  (calc n 0 lista)
  )



