#include <stdio.h>

typedef struct fila {
    int *dados;
    int N, p, u; //N: tamanho da fila; p: O índice do ponteiro de início da fila; u: O índice do ponteiro de fim da fila
} fila;

int desenfileira (fila *f, int *y){
    if(f->p == f->u){
        //verifica se a lista está vazia
        return 0;
    }

    //remove o elemento da fila e salva em y
    *y = f->dados[f->p];

    //atualiza a fila para o próximo elemento
    f->p = (f->p + 1) % f->N;

    return 1;
}