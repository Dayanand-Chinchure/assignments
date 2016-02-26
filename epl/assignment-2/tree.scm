;inorder, pre and post order of the tree

(define inorder (lambda (lst)
(if (null? lst) 1
(list (inorder (cadr lst)) (append (car lst) (inorder (cddr lst)))))))
