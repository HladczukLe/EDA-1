#include <stdio.h>

typedef struct celula {
    int dado;
    struct celula *prox;
} celula;

void imprime(celula *le) {
    celula *atual = le->prox;
    
    if (atual == NULL) {
        printf("NULL\n");
        return;
    }

    while (atual != NULL) {
        printf("%d", atual->dado);
        
        if (atual->prox != NULL) {
            printf(" -> ");
        }
        
        atual = atual->prox;
    }
    
    printf(" -> NULL\n");
}

void imprime_rec(celula *le) {
    if (le->prox == NULL) {
        printf("NULL\n");
    } else {
        printf("%d", le->prox->dado);
        
        if (le->prox->prox != NULL) {
            printf(" -> ");
        }
        
        imprime_rec(le->prox);
    }
}
