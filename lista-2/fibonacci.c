#include <stdio.h>
#define MAX_N 1000

long int memo[MAX_N];
int n;
long int fibonacci(int n){
    if (n==0) return 0;
    if (n==1 || n==2) return 1;

    if (memo[n] != 0) {
        return memo[n];
    }
    memo[n] = fibonacci(n - 1) + fibonacci(n - 2);
    return memo[n];

    return fibonacci(n-1)+fibonacci(n-2);
}
