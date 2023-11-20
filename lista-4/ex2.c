#include <stdio.h>

void selection_sort(int *v, int n){
    int min,aux;

    for (int i =0; i<n;i++){
        min = i;
        for(int j = i+1; j < n; j++){
            if(v[j]<v[min]){
                min = j;
            }
        }
        if(i!=min){
            aux = v[i];
            v[i]= v[min];
            v[min]= aux;
        }
    }
}

int main(){
    int vector[1000];
    int n = 0;

    while (scanf("%d", &vector[n]) != EOF) {
        n++;
    }

    selection_sort(vector, n);

    for (int i = 0; i < n; i++) {
        printf("%d ", vector[i]);
    }
    printf("\n");

    return 0;
}
