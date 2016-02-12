(define gen
  (lambda (n)
    (if (= n 0) '()
      (cons n (gen (- n 1))))))

(define do-calc
  (lambda (n)
    (if (= n 0) 0
	(+ (car (gen n)) (do-calc (- n 1)))))
 )
