#include <stdio.h>
#include <stdlib.h>

typedef struct celula {
    int dado;
    struct celula *prox;
} celula;

void imprime(celula *le){
    if(le==NULL){
        printf("NULL");
    }
    else{
        while(le!=NULL){
            printf("%d ", le->dado);
            le = le->prox;
        }
        printf("NULL");
    }
}

void imprime_rec(celula *le){
    if(le==NULL){
        printf("NULL");
    }
    else{
        printf("%d ", le->dado);
        if (le->prox != NULL) {
            printf(" -> ");
        } else {
            printf("NULL");
        }
        imprime_rec(le->prox);
    }
}