#include <stdio.h>
#include <stdlib.h>

typedef struct celula {
    int dado;
    struct celula *prox;
} celula;

int remove_depois(celula *p) {
    if (p == NULL || p->prox == NULL) {
        // Não é possível remover o elemento seguinte a p
        return 0;
    }

    celula *temp = p->prox;
    p->prox = temp->prox;
    free(temp);
    return 1;
}

void remove_elemento(celula *le, int x) {
    celula *atual = le;
    while (atual->prox != NULL) {
        if (atual->prox->dado == x) {
            celula *temp = atual->prox;
            atual->prox = temp->prox;
            free(temp);
            return;
        }
        atual = atual->prox;
    }
}

void remove_todos_elementos(celula *le, int x) {
    celula *atual = le;
    while (atual->prox != NULL) {
        if (atual->prox->dado == x) {
            celula *temp = atual->prox;
            atual->prox = temp->prox;
            free(temp);
        } else {
            atual = atual->prox;
        }
    }
}
