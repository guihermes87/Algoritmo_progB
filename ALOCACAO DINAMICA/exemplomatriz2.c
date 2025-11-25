#include <stdio.h>
#include <stdlib.h>

void leMatriz(float *a, int l, int c);
void mostraMatriz(float *a, int l, int c);
int maiorElementoMatriz(float *a, int l, int c, int *posL, int *posC);

int main(void)
{
    int d, lin, col, pL, pC;

    float *m, maior;

    printf("Informe o número de linhas da matriz:");
    scanf("%d", &lin);
    printf("Informe o número de colunas da matriz:");
    scanf("%d", &col);

    m = (float *)malloc(lin * col * sizeof(float));
    if (!m)
    {
        printf("Erro na alocacao dinamica de memória\n");
        exit(0);
    }

    leMatriz(m, lin, col);

    mostraMatriz(m, lin, col);

    maior = maiorElementoMatriz(m, lin, col, &pL, &pC);

    printf("\nO maior elemento da matriz eh %f e esta na linha %d e coluna %d\n", maior, pL, pC);

    void leMatriz(float *a, int l, int c) {
        int i, j, d;
        for (i = 0; i < l; i++) {
            for (j = 0; j < c; j++)
            {
                d = i * c + j;
                printf("\na[%d][%d]:", i, j);
                scanf("%f", a + d);
            }
    }
    
    void mostraMatriz(float *a, int l, int c)
    {
        int i, j, d;
        for (i = 0; i < l; i++)
        {
            for (j = 0; j < c; j++)
            {
                d = i * c + j;
                printf("%f ", *(a + d));
            }
        }
        return;
    }

    int maiorElementoMatriz(float *a, int l, int c, int *posL, int *posC)
    {
        int i, j, d;
        float maior;
        maior = *a;
        for (i = 0; i < l; i++)
            for (j = 0; j < c; j++)
            {
                d = i * c + j;
                if (maior < *(a + d))
                {
                    maior = *(a + d);
                    *posL = i;
                    *posC = j;
                }
            }
        return maior;
    }
    
    free(m);

    return 1;
}