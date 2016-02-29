; 3 (a) 
;Successor and Pred 
; for Plus 
; plus( x, y ) = if x =0 then y 
;                else succ [add [pred x] y]

;---------------------------------------------------

;3 (b)
;Procedure to addition using succ and pred

(define succ (lambda (n) (if(= n 0) 0 (+ n 1))))
(define pred (lambda (n) (if(= n 0) 0 (- n 1))))
(define is-zero (lambda (n) (if (= n 0) #t #f)))

(define add 
(lambda (a b) 
(if (is-zero a) b
(succ (add (pred a) b))
)))

;----------------------------------------------------------------
;3 (c)
;Mutiplication using addition operation (using succ and pred)
; using 
;if x = 0 then 0 else (add (mult (p a) b) b)

;-------------------------------------------------------------------------

;3 (d)
; Implementation from 3 (c)

(define mult
(lambda (a b) 
(if (= a 0) 0 (add (mult (pred a) b) b))))

;-------------------------------------------------------------------------

;3 (e)

(define expo
(lambda (a b)
(if (= a 0) b)
(expo ((pred a) b))
))





