#include <stdio.h>
#include <stdlib.h>

typedef struct celula {
    int dado;
    struct celula *prox;
} celula;

void insere_inicio (celula *le, int x){
    celula *novo = malloc (sizeof (celula));

    if(novo){
        novo->dado = x;
        novo->prox = le;
        le = novo;
    }
}

void insere_antes (celula *le, int x, int y){
    celula *atual = le->prox;
    celula *anterior = le;

    while (atual != NULL && atual->dado != y) {
        anterior = atual;
        atual = atual->prox;
    }
    
    if(atual == NULL){
        celula *novo = malloc (sizeof (celula));

        if(novo){
            novo->dado = x;
            novo->prox = NULL;
            anterior->prox = novo;
        }
    }
    else{
        celula *novo = malloc (sizeof (celula));

        if(novo){
            novo->dado = x;
            novo->prox = atual;
            anterior->prox = novo;
        }
    }
}