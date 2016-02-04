(define (fun n lista)
  (list_copy n lista)
)
  
(define (list_copy n lista)
   (if (= n 1)
     '()
     (cons (car lista) (list_copy (- n 1) (cdr lista))))
   )
