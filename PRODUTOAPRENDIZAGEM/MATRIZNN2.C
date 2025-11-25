#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void lermatriz(float *m, int l, int c)
{
    int i, j, k;
    for (i = 0; i < l; i++)
    {
        for (j = 0; j < c; j++)
        {
            k = i * c + j;
            printf("Elemento [%d][%d]: ", i, j);
            scanf("%f", (m + k));
        }
    }
}

void mostrarMatriz(float *m, int l, int c)
{
    int i, j, k;
    printf("\nMatriz gerada:\n");
    for (i = 0; i < l; i++)
    {
        for (j = 0; j < c; j++)
        {
            k = i * c + j;
            printf("%.0f\t", *(m + k));
        }
        printf("\n");
    }
    printf("\n");
}

void gerarMatriz(float *m, int l, int c)
{
    int i, j, k;
    for (i = 0; i < l; i++)
    {
        for (j = 0; j < c; j++)
        {
            k = i * c + j;
            *(m + k) = (float)(rand() % 100);
        }
    }
}

void somatorio_coluna(float *m, int l, int c, int col, float *soma)
{
    int i, k;
    *soma = 0.0;
    for (i = 0; i < l; i++)
    {
        k = i * c + col;
        *soma += *(m + k);
    }
}

float mult_primeira_linha(float *m, int n, float k)
{
    float produto = 1.0f;
    for (int j = 0; j < n; j++)
    {
        produto *= m[j];
    }
    return produto * k;
}

void matriz_diagonal_soma(float *m, int l, int c, float *soma)
{
    int i, k;
    *soma = 0.0f;
    for (i = 0; i < l; i++)
    {
        k = i * c + i;
        *soma += *(m + k);
    }
}

void maior_valor_matriz(float *m, int l, int c, float *maior, int *posicoes, int *num_posicoes)
{
    int i, j, k;
    *maior = *(m);
    *num_posicoes = 0;

    for (i = 0; i < l; i++)
    {
        for (j = 0; j < c; j++)
        {
            k = i * c + j;
            if (*(m + k) > *maior)
            {
                *maior = *(m + k);
            }
        }
    }

    for (i = 0; i < l; i++)
    {
        for (j = 0; j < c; j++)
        {
            k = i * c + j;
            if (*(m + k) == *maior)
            {
                posicoes[(*num_posicoes) * 2] = i;
                posicoes[(*num_posicoes) * 2 + 1] = j;
                (*num_posicoes)++;
            }
        }
    }
}

int simetrica(float *m, int n)
{
    int i, j;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (*(m + i * n + j) != *(m + j * n + i))
            {
                return 0;
            }
        }
    }
    return 1;
}

int diagonal(float *m, int n)
{
    int i, j;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (i != j && *(m + i * n + j) != 0)
            {
                return 0;
            }
        }
    }
    return 1;
}

int triangular_superior(float *m, int n)
{
    int i, j;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (i > j && *(m + i * n + j) != 0)
            {
                return 0;
            }
        }
    }
    return 1;
}

int triangular_inferior(float *m, int n)
{
    int i, j;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (i < j && *(m + i * n + j) != 0)
            {
                return 0;
            }
        }
    }
    return 1;
}

int main()
{
    int n;
    float *a;
    char opcao_menu, opcao_submenu;

    srand(time(NULL));

    printf("=== Gerador de Matrizes ===\n");
    printf("Escolha entre as opcoes abaixo:\n"
           "1 - Informar os elementos da Matriz\n"
           "2 - Gerar os elementos da Matriz\n"
           "3 - Sair\n");
    printf("Opcao: ");
    scanf(" %c", &opcao_menu);

    switch (opcao_menu)
    {
    case '1':
        printf("Digite o tamanho da matriz (NxN): ");
        scanf("%d", &n);

        a = (float *)malloc(n * n * sizeof(float));
        if (!a)
        {
            printf("Erro na alocacao de memoria!\n");
            exit(-1);
        }

        lermatriz(a, n, n);
        mostrarMatriz(a, n, n);
        break;

    case '2':
        printf("Digite o tamanho da matriz (NxN): ");
        scanf("%d", &n);

        a = (float *)malloc(n * n * sizeof(float));
        if (!a)
        {
            printf("Erro na alocacao de memoria!\n");
            exit(-1);
        }

        gerarMatriz(a, n, n);
        mostrarMatriz(a, n, n);
        break;

    case '3':
        printf("Saindo do programa...\n");
        return 0;

    default:
        printf("Opcao invalida!\n");
        return 1;
    }

    do
    {
        printf("\n=== Menu Principal ===\n");
        printf("A - Classe de Matriz\n"
               "B - Calculos sobre a Matriz\n"
               "C - Sair\n");
        printf("Opcao: ");
        scanf(" %c", &opcao_submenu);

        switch (opcao_submenu)
        {
        case 'A':
        case 'a':
        {
            printf("\n=== Classificacao da Matriz ===\n");
            
            if (simetrica(a, n))
            {
                printf("A matriz e SIMETRICA\n");
            }
            else
            {
                printf("A matriz NAO e simetrica\n");
            }

            if (diagonal(a, n))
            {
                printf("A matriz e DIAGONAL\n");
            }
            else
            {
                printf("A matriz NAO e diagonal\n");
            }

            if (triangular_superior(a, n))
            {
                printf("A matriz e TRIANGULAR SUPERIOR\n");
            }
            else
            {
                printf("A matriz NAO e triangular superior\n");
            }

            if (triangular_inferior(a, n))
            {
                printf("A matriz e TRIANGULAR INFERIOR\n");
            }
            else
            {
                printf("A matriz NAO e triangular inferior\n");
            }
            break;
        }

        case 'B':
        case 'b':
        {
            float soma, resultado, maior, k;
            int *posicoes, num_posicoes;

            printf("\n=== Calculos sobre a Matriz ===\n");

            somatorio_coluna(a, n, n, 0, &soma);
            printf("Somatorio da primeira coluna: %.2f\n", soma);

            printf("Digite o numero para multiplicar a primeira linha: ");
            scanf("%f", &k);
            resultado = mult_primeira_linha(a, n, k);
            printf("Multiplicacao dos elementos da primeira linha por %.1f: %.1f\n", k, resultado);

            matriz_diagonal_soma(a, n, n, &soma);
            printf("Soma da diagonal principal: %.2f\n", soma);

            posicoes = (int *)malloc(n * n * 2 * sizeof(int));
            
            maior_valor_matriz(a, n, n, &maior, posicoes, &num_posicoes);
            printf("Maior valor da matriz: %.0f\n", maior);
            printf("Posicoes do maior valor:\n");
            for (int i = 0; i < num_posicoes; i++)
            {
                printf("  [%d][%d]\n", posicoes[i * 2], posicoes[i * 2 + 1]);
            }
            free(posicoes);
            break;
        }

        case 'C':
        case 'c':
            printf("Encerrando o programa...\n");
            break;

        default:
            printf("Opcao invalida!\n");
            break;
        }
    } while (opcao_submenu != 'C' && opcao_submenu != 'c');

    free(a);
    return 0;
}