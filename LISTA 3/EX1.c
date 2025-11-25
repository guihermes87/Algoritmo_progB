#include <stdio.h>
#include <stdlib.h>

int m[6][6];
int i, j;

void lerLinha() {
    int j;
    printf("Digite os elementos da primeira linha:\n");
    for (j = 0; j < 6; j++){
        scanf("%d", &m[0][j]);
        
    }
    return;
}

void preencherMatriz() {
    
    for (i = 1; i < 6; i++) {
        for (j = 0; j < 6; j++)
            m[i][j] = m[0][j] * (i + 1);
}
printf("\n\t");
}

void mostrarMatriz() {
    for (i = 0; i < 6; i++) {
        for (j = 0; j < 6; j++)
            printf("%d\t", m[i][j]);
    }
    printf("\n");
}

int main(){

    lerLinha();
    preencherMatriz();
    mostrarMatriz();
    
    return 0;
}