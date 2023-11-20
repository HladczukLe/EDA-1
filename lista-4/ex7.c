#include <stdio.h>

int partition(int *v, int begin, int end){
    int pivot = (v[begin] + v[end] + v[(begin+end)/2])/3;

    while(begin < end){
        while(begin<end && v[begin]<=pivot){
            begin++;
        }
        while(begin<end && v[end]>pivot){
            end--;
        }
        int aux = v[begin];
        v[begin] = v[end];
        v[end] = aux;
    }
    return begin;
}

void quicksort(int *v,int begin,int end){
    if(begin<end){
        int position = partition(v,begin,end);
        quicksort(v,begin,position -1);
        quicksort(v,position,end);
    }
}

void printVector(int *v, int length){
    for(int i = 0; i <= length; i++){
        printf("%d ",v[i]);
    }
    printf("\n");

}

int main(){
    int n;
    scanf("%d", &n);
    int vector[n];

    for(int i = 0; i < n; i++){
        scanf("%d ", &vector[i]);
    }
    quicksort(vector, 0 ,n-1);
    printVector(vector,n-1);


    return 0;
}