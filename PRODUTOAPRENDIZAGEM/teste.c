#include <stdio.h>
#include <stdlib.h>

float fill_matrix_user(int **mat, int n, int m, char nome) {
    printf("Digite os elementos da matriz %c (%dx%d):\n", nome, n, m);
    for (int i = 0; i < n; ++i)
        for (int j = 0; j < m; ++j) {
            printf("[%d][%d]: ", i, j);
            while (scanf("%d", &mat[i][j]) != 1) {
                while (getchar() != '\n'); // limpa entrada inválida
                printf("Entrada inválida. Digite um inteiro para [%d][%d]: ", i, j);
            
            }
        }
}

float fill_matrix_random(int **mat, int n, int m, int minv, int maxv) {
    for (int i = 0; i < n; ++i)
        for (int j = 0; j < m; ++j)
            mat[i][j] = (rand() % (maxv - minv + 1)) + minv;
            printf("Matriz preenchida com valores aleatórios entre %d e %d.\n", minv, maxv);

}



int main () {
int n, m;
int **matA, **matB;

fill_matrix_user(matA, n, m, 'A');

fill_matrix_random(matB, n, m, 0, 10);

    return 0;
}