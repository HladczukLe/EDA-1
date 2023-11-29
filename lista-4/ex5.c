#include <stdio.h>

void troca(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void selectionSortRecursivo(int *v, int n, int i) {
    if (i == n - 1) {
        return;
    }

    int indiceMinimo = i;
    for (int j = i + 1; j < n; j++) {
        if (v[j] < v[indiceMinimo]) {
            indiceMinimo = j;
        }
    }

    troca(&v[i], &v[indiceMinimo]);

    selectionSortRecursivo(v, n, i + 1);
}

void ordena (int *v, int n){
    selectionSortRecursivo(v, n, 0);
}