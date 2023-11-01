#include <stdio.h>

int main(){
    int num = 49;
    int resto,quociente,sum=0;

    while (1){
        if (resto==1 || quociente==0){
            break;
        }
        resto = num%10;
        quociente = num/10;
        sum += resto;
        num = quociente;
    }
    printf("sum = %d\n",sum);

    return 0;
}