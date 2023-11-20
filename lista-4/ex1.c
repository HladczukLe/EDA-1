#include <stdio.h>

void bubbleSort(int *v, int lenght){
    if(lenght < 2) return;

    for(int i = 0; i < lenght-1; i++){
        if(v[i]>v[i+1]){
            int aux = v[i];
            v[i] = v[i+1];
            v[i+1] = aux;
        }
    }
    bubbleSort(v,lenght-1);
}

int main(){
    int vector[1000];
    int n = 0;

    while (scanf("%d", &vector[n]) != EOF) {
        n++;
    }

    bubbleSort(vector, n);

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