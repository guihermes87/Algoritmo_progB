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
    for (i = 0; i < l; i++)
    {
        for (j = 0; j < c; j++)
        {
            k = i * c + j;
            printf("%.0f\t", *(m + k));
        }
        printf("\n");
    }
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
    *soma = 0.0f;
    for (i = 0; i < l; i++)
    {
        k = i * c + col;
        *soma += *(m + k);
    }
}

float mult_primeira_linha(float *m, int n, int k) {
   
    float soma = 0.0f;
    for (int j = 0; j < n; j++) {
        soma += m[j] * k;
    }

    return soma;
}

void matriz_diagonal(float *m, int l, int c, float *soma)

{
    int i, k;
    *soma = 0.0f;
    for (i = 0; i < l; i++)
    {
        k = i * c + i;
        *soma += *(m + k);
    }
}

void maior_valor_matriz(float *m, int l, int c, float *maior)
{
    int i, j, k;
    *maior = *(m); 
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
}

void somatorio_linha(float *m, int l, int c, int col, float *soma)
{
    int i, k;
    *soma = 0.0f;
    for (i = 0; i < c; i++)
    {
        k = col * c + i;
        *soma += *(m + k);
    }
}

int main()
{
    int l, c;
    float *a;
    char opcao_menu, opcao_submenu;
    

   

    printf("=== Gerador de Matrizes ===\n");
    printf("Escolha entre as opções abaixo:\n"
           "A - Informar os elementos da Matriz\n"
           "B - Gerar os elementos da Matriz\n"
           "C - Sair\n");
    scanf(" %c", &opcao_menu);

    switch (opcao_menu)
    {
        case 'A':
        case 'a':
            printf("Digite o número de linhas: ");
            scanf("%d", &l);
            printf("Digite o número de colunas: ");
            scanf("%d", &c);

            a = (float *)malloc(l * c * sizeof(float));
            if (!a)
            {
                printf("Erro na alocação de memória!\n");
                exit(-1);
            }

            lermatriz(a, l, c);
            mostrarMatriz(a, l, c);
    

            break;

        case 'B':
        case 'b':
            
            printf("Digite o número de linhas: ");
            scanf("%d", &l);
            printf("Digite o número de colunas: ");
            scanf("%d", &c);

            a = (float *)malloc(l * c * sizeof(float));
            if (!a)
            {
                printf("Erro na alocação de memória!\n");
                exit(-1);
            }

            gerarMatriz(a, l, c);
            mostrarMatriz(a, l, c);
            
            break;

        case 'C':
        case 'c':
            printf("Saindo do programa...\n");
            break;

        default:
            printf("Opção inválida!\n");
            break;
    }
    
    printf("Escolha uma opção do submenu:\n"
           "1 - Classe de Matriz\n"
           "2 - Cálculos sobre a Matriz\n");
    
           switch (opcao_submenu)
    {
    case 1:
        
        break;
    
    case 2:
    {
        int coluna;
        float soma;
        printf("Digite o número da coluna para somar: ");
        scanf("%d", &coluna);
        if (coluna < 0 || coluna >= c) {
            printf("Coluna inválida!\n");
        } else {
            somatorio_coluna(a, l, c, coluna, &soma);
            printf("Soma da coluna %d: %.2f\n", coluna, soma);
        }
        printf("Digite o número para multiplicar a primeira linha: ");
        float k;
        scanf("%f", &k);
        float resultado = mult_primeira_linha(a, c, k);
        printf("Resultado da multiplicação da primeira linha por %.2f: %.2f\n", k, resultado);

        break;
    }
    
    default:
        break;
    }
    
    free(a);
    return 0;
}
