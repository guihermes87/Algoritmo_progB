#include <stdio.h>
#include <stdlib.h>
#define N 10

// minimax = menor elemento da linha maior elemento da coluna

// Encontrar o maior elemento, encontrar a linha do maior elemento, na linha do maior elemento encontrar o menor elemento.

int m[N][N];

void gerarMatriz()
{
    int i, j;
    for (i = 0; i < N; i++)
    {
        for (j = 0; j < N; j++)
        {
            m[i][j] = rand() % 100;
        }
    }
}

void mostrarMatriz()
{
    int i, j;
    for (i = 0; i < N; i++)
    {
        for (j = 0; j < N; j++)
        {
            printf("%3d ", m[i][j]);
        }
        printf("\n");
    }
}
int encontrarMaior()
{
    int i, j;
    int maior = m[0][0];
    int linhaMaior = 0;

    for (i = 0; i < N; i++)
    {
        for (j = 0; j < N; j++)
        {
            if (m[i][j] > maior)
            {
                maior = m[i][j];
                linhaMaior = i;
            }
        }

        printf("Maior elemento: %d\n", maior);
        return linhaMaior;
    }
}

int encontrarMX(int l)
{
    int menor = m[l][0];
    int j;
    for (j = 0; j < N; j++)
    {
        if (m[l][j] < menor)
        {
            menor = m[l][j];
        }
    }
    return menor;
}

int main()
{
    int linha;
    gerarMatriz();
    mostrarMatriz();
    int minimax;

    linha = encontrarMaior();
    printf("A linha do maior elemento e: %d\n", linha);

    minimax = encontrarMX(linha);

    return 0;
}