#include <stdio.h>

int sumOfDigits(long long int num){
    if (num<10){ //caso base
        return num;
    }
    int lastDigit = num%10;
    return lastDigit + sumOfDigits(num/10);
}

int main(){
    long long int num;
    scanf("%lld", &num);
    int result = sumOfDigits(num);
    printf("%d\n",result);
    return 0;
}