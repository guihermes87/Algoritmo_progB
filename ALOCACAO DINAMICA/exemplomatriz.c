#include <stdio.h>
#include <stdlib.h>


void mostrarMatriz (float *m, int l, int c ) {
    int i, j, k;
    for (i = 0; i < l; i++) {
        for (j = 0; i < c; i++) { 
    }
}
    printf("%d\t:", * (m + k));
}

void lermatriz(float *m, int l, int c)
{
    int i, j, k;
    for (i = 0; i < l; i++)
    {
        for (j = 0; j < c; j++)
        {
            k = i * c + j;
            printf("Elemento [%d][%d] :", i, j);
            scanf("%f", (m + k));
        }
    }
    return;
}

int main()

{

    int linha, coluna;
    float *a;

    printf("Digite o número de linhas: ");
    scanf("%i", &linha);
    printf("Digite o número de colunas: ");
    scanf("%i", &coluna);

    a = (float *)malloc(linha * coluna * sizeof(float));
    if (!a)
    {
        printf("Erro na alocação!");
        exit(-1);
    }

    lermatriz(a, linha, coluna);
    mostrarMatriz(a,linha,coluna);

    free(a);
    return 0;
}