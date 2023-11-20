#include <stdio.h>

void insertionSort(int *v, int len){
    for(int i=0; i<len-1; i++){
        if (v[i]>v[i+1]){
            int aux = v[i+1];
            v[i+1] = v[i];
            v[i] = aux;

            int j = i-1;
            while(j>=0){
                if(aux<v[j]){
                    v[j+1]=v[j];
                    v[j] = aux;
                }
                else{
                    break;
                }
                j--;
            }            
        }
        
    }
}

int main(){
    int vector[50000];
    int n = 0;
    while (scanf("%d", &vector[n]) != EOF) {
        n++;
    }

    insertionSort(vector, n);

    for (int i = 0; i < n; i++) {
        if (i==n-1){
            printf("%d", vector[i]);  
        }
        else{
            printf("%d ", vector[i]);
        }
    }
    printf("\n");
}