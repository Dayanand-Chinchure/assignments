(define lookup
  (lambda (depth pos env)
    (cond
     ((and (= depth 0) (= pos 0))
      (caar env))
     ((= depth 0)
      (lookup depth (- pos 1) (cons (cdar env) (cdr env))))
     (else (lookup (- depth 1) pos (cdr env))))))

