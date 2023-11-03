#include <stdio.h>
#include <stdlib.h>

typedef struct celula {
    int dado;
    struct celula *prox;
} celula;

void imprime(celula *le){
    if(le==NULL){
        printf("NULL\n");
    }
    else{
        while(le != NULL){
            printf("%d", le->dado);
            if (le->prox != NULL) {
                printf(" -> ");
            }
            le = le->prox;
        }
        printf(" -> NULL\n");
    }
}

void imprime_rec(celula *le) {
    if (le == NULL) {
        printf("NULL\n");
    } else {
        printf("%d", le->dado);
        if (le->prox != NULL) {
            printf(" -> ");
        }
        imprime_rec(le->prox);
    }
}