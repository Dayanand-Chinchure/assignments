(define (fun n lista)
  (define (list_copy count listb lista)
    (if (= count n)
      (display listb)
      (cons (car listb) (list_copy (+ count 1) listb (cdr lista)))))
  (list_copy 1 '() lista)
  )

