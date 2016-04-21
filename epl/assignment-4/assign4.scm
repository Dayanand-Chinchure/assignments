(define do-parse
  (lambda (lst lst1)
    (if (null? lst) lst1
      (list 'lambda (car lst) (do-parse (cdr lst) lst1)))))

(define parse
  (lambda (lst)
    (if (null? lst) lst
      (if (eq? (car lst) 'lambda) (do-parse (cadr lst) (caddr lst)) '()))))

(define sym '(+ - / *))

(define check-symbol
  (lambda (a sym)
    (if (null? sym) #f 
      (if (eq? (car sym) a) #t (check-symbol a (cdr sym))))))

(define ast
  (lambda (lst)
    (if (null? lst) lst
      (cond
	((eq? (car lst) 'lambda) (list 'abs (ast (cdr lst))))
	((symbol? (car lst)) (if (check-symbol (car lst) sym) (list 'num-op (car lst) (ast (cdr lst))) 
			       (list 'var-ref (car lst) (ast (cdr lst)))))
	((list? (car lst)) (ast (car lst)))))))
