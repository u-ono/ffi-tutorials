#!/usr/bin/env eus

(setq m (load-foreign "./fib.so"))
(defforeign fib m "fib" (:integer) :integer)

(format t "please input number : ")
(finish-output)

(setq n (read))
(format t "fib(~A) = ~A~%" n (fib n))
