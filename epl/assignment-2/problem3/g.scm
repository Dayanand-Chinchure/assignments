; for inorder

(define inorder
(lambda (tree)
(if (null? tree) '() 
(append (inorder (cadr tree)) 
	(list (car tree)) 
	(inorder (caddr tree))
))))


;Preorder

(define preorder
(lambda (tree)
(if (null? tree) '() 
(append (list (car tree))
	(preorder (cadr tree)) 
	(preorder (caddr tree))
))))


; Postorder

(define postorder
(lambda (tree)
(if (null? tree) '() 
(append (postorder (cadr tree)) 
	(postorder (caddr tree))
	(list (car tree))
))))


