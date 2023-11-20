#include <stdio.h>

void shellSort(int *v, int len){
    int aux;
    int h = 1;
    while (h< len/3){
        h = 3*h+1;
    }

    while(h>0){
        for(int i=h; i<len; i++){
            aux = v[i];
            int j = i;
            while (j>=h && aux<v[j-h]){
                v[j] = v[j-h];
                j = j-h;
            }
            v[j] = aux;
        }
        h = (h-1)/3;
    }
}

int main(){
    int n;
    scanf("%d", &n);
    int vector[n];

    for(int i = 0; i < n; i++){
        scanf("%d ", &vector[i]);
    }
    shellSort(vector, n);

    for (int i = 0; i < n; i++) {
        if (i==n-1){
            printf("%d", vector[i]);  
        }
        else{
            printf("%d ", vector[i]);
        }
    }
    printf("\n");


    return 0;
}