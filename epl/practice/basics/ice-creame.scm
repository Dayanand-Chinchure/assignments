(define flav '(vanilla ginger chocolate coffe mocha rasberry))

(define check 
  (lambda lst

    (if (member lst '(vanilla ginger chocolate coffe mocha rasberry)) (display 'coming right up!)
      (display 'Sorry))))
