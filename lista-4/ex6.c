#include <stdio.h>
#include <string.h>

struct Sequencia {
    int tamanho;
    char caractere;
    int posicao;
};

int compararSequencias(const void *a, const void *b) {
    return ((struct Sequencia*)b)->tamanho - ((struct Sequencia*)a)->tamanho;
}

void analisarSequencias(char *entrada) {
    struct Sequencia sequencias[100000];
    int i = 0, j = 0;

    while (entrada[i] != '\0') {
        char caractere = entrada[i];
        int count = 1;
        int k = i + 1;

        while (entrada[k] != '\0' && entrada[k] == caractere) {
            count++;
            k++;
        }

        sequencias[j].tamanho = count;
        sequencias[j].caractere = caractere;
        sequencias[j].posicao = i;

        j++;
        i = k;
    }

    qsort(sequencias, j, sizeof(struct Sequencia), compararSequencias);

    for (i = 0; i < j; i++) {
        printf("%d %c %d\n", sequencias[i].tamanho, sequencias[i].caractere, sequencias[i].posicao);
    }
}

int main() {
    char entrada[100001];
    fgets(entrada, sizeof(entrada), stdin);

    size_t len = strlen(entrada);
    if (entrada[len - 1] == '\n') {
        entrada[len - 1] = '\0';
    }

    analisarSequencias(entrada);

    return 0;
}
