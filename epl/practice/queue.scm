;;#######Implimenting Queue#########
(define (make-queue)
 (define p (cons '() '() ) )
 (cons p p)
)
;Checks whether a queue is empty
(define (null-queue? q)
 (and (eq? (front q) (rear q)) (eq? (car (front q)) '() ))
)

(define (front q)
 (car q)
)

(define (rear q)
 (cdr q)
)

(define (push q e)
 (define p (cons e '()))
 (if (null-queue? q)
  (begin (set-car! q p)
   (set-cdr! q p)
  )
  (begin
   (set-cdr! (rear q) p)
   (set-cdr! q p))))

(define (pop q)
 (define x 0)
 (if (null-queue? q)
  'Empty
  (if (and (eq? (front q) (rear q))  (eq? '() (cdr (front q)))   )
   (begin
    (set! x (car (front q)))
    (set-car! (front q) '() )
    x
   ) 
   (begin
    (set! x (car (front q)))
    (set-car! q (cdr (front q)) )
   x))))
