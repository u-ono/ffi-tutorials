#include <stdio.h>
#include <stdlib.h>

long long fib(int n){

    unsigned long long *table;
    int i;

    table = (unsigned long long *)malloc(sizeof(unsigned long long)*n);

    for(i=0;i<n;i++){
        if(i==0||i==1){
            table[i] = 1;
        }else{
            table[i] = table[i-1]+table[i-2];
        }
    }

    return table[n-1];
}
