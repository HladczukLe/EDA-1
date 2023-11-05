#include <stdio.h>

typedef struct fila {
int *dados;
int N, p, u; //N: tamanho da fila; p: O índice do ponteiro de início da fila; u: O índice do ponteiro de fim da fila
} fila;

int desenfileira (fila *f, int *y){
    if (f->p == f->u){
        return 0;
    }
    *y=f->dados[f->p];
    f->p = f->p+1;

    return 1;
}