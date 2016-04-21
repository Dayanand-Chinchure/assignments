(define null '())

(define do_print 
  (lambda (lst)
    (if (eq? lst null) lst
      (if (eq? (car lst) (car (cdr lst))) (cons (car lst) (do_print (cdr lst))) lst ))))

(define check_list 
  (lambda (lst)
    (if (eq? lst null) lst
      (cons (do_print (car lst)) (check_list (cdr lst))))))
