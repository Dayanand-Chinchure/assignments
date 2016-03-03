(define la-pos
  (lambda (symbol depth pos)
    (cond
     ((null? env) symbol)
     ((null? (car env)) (la-pos symbol (cdr env) (+ 1 depth) 0))
     ((eq? (caar env) symbol) (list ': depth pos))
     (else (la-pos symbol (cons (cdar env) (cdr env)) depth (+ 1 pos))))))

(define la-list
  (lambda (lst)
    (cond
     ((null? lst) '())
     (else (cons (lexical-address (car lst)) (la-list (cdr lst)))))))

(define lexical-address
  (lambda (lst)
    (cond
     ((not (list? lst)) (la-pos lst 0 0))
     ((null? lst) '())
     ((eq? 'lambda (car lst)) 
      (list 'lambda 
	    (cadr lst) 
	    (lexical-address (caddr lst) 
			     (cons (cadr lst)))))
     (else (la-list lst)))))
