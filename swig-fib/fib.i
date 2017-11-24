%module fib

%{
#include <stdio.h>
#include <stdlib.h>
%}

extern unsigned long long fib(int n);
