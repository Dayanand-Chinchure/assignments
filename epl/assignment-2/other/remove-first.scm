(define rf
  (lambda (sym lst)
    (if (null? lst) lst
      (if (eq? sym (car lst)) (cdr lst)
	(cons (car lst) (rf sym (cdr lst)))))))
