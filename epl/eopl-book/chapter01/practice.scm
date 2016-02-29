;Procedure to check wheater n belong to S
;as n=0 and n-3 belong to S only

;in-s? : N -> Bool

(define in-s?
	(lambda (n)
	(if (zero? n) #t (if (>= (- n 3) 0) (in-s? (- n 3)) #f))))

;---------------------------------------------------------------------------
;Procedure for {3n +2 | n belong to n}

(define in-n? (lambda (n)
(if (= n 2) #t (if (>= (- n 3) 0) (in-n? (- n 3)) #f))
))

;---------------------------------------------------------------------------




