#include <stdio.h>

int fib(int n);

int main(void){

    int n;

    printf("Please input number: ");
    scanf("%d", &n);     
    fprintf(stdout, "fib(%d) = %d\n", n, fib(n));

    return 0;
}
