(define (mul x y) 
  (if (and (number? x) (number? y)) 
    (* x y) (display 'Not_number)))
