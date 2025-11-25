#include <stdio.h>

void lerMatriz(int m[3][3]);
int maiorElemento(int m[3][3]);

int main(void)
{
    int a[3][3], i, j, maior;
    lerMatriz(a);
    maior = maiorElemento(a);
 printf("O maior elemento da matriz eh %d\n", maior);
 return 0;
}

void lerMatriz(int m[3][3])
{
    int i, j;
    for (i = 0; i < 3; i++)
        for (j = 0; j < 3; j++)
        {
            printf("a[%d][%d]: ", i, j);
            scanf("%d", &m[i][j]);
        }
}

int maiorElemento(int m[3][3])
{
    int i, j, elementoMaior;
    elementoMaior = m[0][0];

    for (i = 0; i < 3; i++)
        for (j = 0; j < 3; j++)
        {
            if (elementoMaior < m[i][j])
                elementoMaior = m[i][j];
        }

    return elementoMaior;
}