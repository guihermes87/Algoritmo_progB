//Escreva um programa que leia um vetor com 30 elementos inteiros e escreva funções para fazer
//o que se pede:
//a. Exibir os elementos do vetor na ordem inversa
//b. Decompor em dois outros vetores, um contendo os elementos de índice ímpar e
//outro com os elementos de ordem par//

#include <stdio.h>
#include <stdlib.h> 

int m[30];

void VetorInverso(int m[]) {
    int i;
    printf("Elementos do vetor na ordem inversa:\n");
    for (i = 29; i >= 0; i--) {
        printf("%d ", m[i]);
    }
    printf("\n");
}

int main() {
    int i, par[15], impar[15], j = 0, k = 0;

    printf("Digite 30 elementos inteiros:\n");
    for (i = 0; i < 30; i++) {
        scanf("%d", &m[i]);
    }
    
    

    for (i = 0; i < 30; i++) {
        if (m[i] % 2 == 0) {
            par[j] = m[i];
            j++;
        } else {
            impar[k] = m[i];
            k++;
        }
    }

    printf("Elementos de índice par:\n");
    for (i = 0; i < j; i++) {
        printf("%d ", par[i]);
    }
    printf("\n");

    printf("Elementos de índice ímpar:\n");
    for (i = 0; i < k; i++) {
        printf("%d ", impar[i]);
    }
    printf("\n");

    VetorInverso(m);

    return 0;
}