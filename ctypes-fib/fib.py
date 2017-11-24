#!/usr/bin/env python

import ctypes
fib = ctypes.CDLL('./fib.so')

# settings of fib.fib(n) 

fib.fib.argtypes = [ctypes.c_int]
fib.fib.restypes = ctypes.c_ulonglong

# implement of fib.fib(n)

print 'please input number : ',
n = input()

print('fib({}) = {}'.format(n, fib.fib(n)))
