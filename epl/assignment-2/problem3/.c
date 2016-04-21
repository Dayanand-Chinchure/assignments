;inorder, pre and post order of the tree

(define inorder
(lambda (tree)
(if (null? tree) tree
(append (inorder (cadr tree)) (list (car tree)) (inorder (cddr tree))))))

