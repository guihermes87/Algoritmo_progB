#include <stdio.h>
#include <stdlib.h>

int m[10][10];

void lerMatriz() {
    int i, j;
    printf("Digite os elementos da matriz:\n");
    for (i = 0; i < 10; i++) {
        for (j = 0; j < 10; j++) {
            scanf("%d", &m[i][j]);
        }
    }
}

void mostrarMaiorMenor() {
    int i, j;
    int maior = m[0][0];
    int menor = m[0][0];

    for (i = 0; i < 10; i++) {
        for (j = 0; j < 10; j++) {
            if (m[i][j] > maior) 
            maior = m[i][j];
            if (m[i][j] < menor) 
            menor = m[i][j];
        }
    }
    printf("O maior elemento da matriz e: %d\n", maior);
    printf("O menor elemento da matriz e: %d\n", menor);
}

int main() {
    lerMatriz();
    mostrarMaiorMenor();
    return 0;
}