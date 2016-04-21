(define (make-stack)
    (let ((stack '()))
         (lambda (msg . args)
	         (cond 
		           [(eq? msg 'pop)  (set! stack (cdr stack))]
			           [(eq? msg 'push) (set! stack (append (reverse args) stack))]
				           [(eq? msg 'stack) stack]
					           [else "Not valid message!"]))))

(define s (make-stack))
