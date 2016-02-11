(define c 0)

(define gen
  (lambda (n)
    (if (= c n) 0
      ((append (list (+ c 1)) (gen (- n 1)))))))

(define do-calc
  (lambda (n gen)
    (if (null? gen) 0
      (if (= n 0) 0 
	(+ (car gen) (do-calc (- n 1) (cdr gen))))))
  (gen n)
 )
