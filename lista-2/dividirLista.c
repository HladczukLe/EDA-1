#include <stdio.h>
#include <stdlib.h>

typedef struct celula {
    int dado;
    struct celula *prox;
} celula;

void divide_lista (celula *l, celula *l1, celula *l2){
    celula *p = l->prox;
    celula *p1 = l1;
    celula *p2 = l2;

    while(p!=NULL){
        if(p->dado%2==0){
           p2->prox = p;
           p2 = p2->prox;
        }
        else{
            p1 -> prox = p;
            p1 = p1->prox;
        } 
    p = p->prox;
    }
    p1->prox = NULL;
    p2->prox = NULL;
    
    l->prox = NULL;
}
