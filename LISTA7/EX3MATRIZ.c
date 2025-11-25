# include <stdio.h>
# include <stdlib.h>


int *alocarMatriz(int linhas, int colunas){
    int *m;
    m = (int *) malloc (linhas * colunas * sizeof(int));
    if (!m)
    {
        printf("Erro na alocação!");
        exit(-1);
    }
    return m;
}

void gerarMatriz(int *m, int linhas, int colunas){
    int i, j, k;
    for (i = 0; i < linhas; i++)
    {
        for (j = 0; j < colunas; j++)
        {
            k = i * colunas + j;
            *(m + k) = rand() % 10;
        }
    }
    return;
}

void mostrarMatriz (int *m, int linhas, int colunas){
    int i, j, k;
    for (i = 0; i < linhas; i++) {
        for (j = 0; j < colunas; j++) { 
            k = i * colunas + j;
            printf("%d\t", *(m + k));
        }
        printf("\n");
    }
    return;
}

void somaMatriz(int *a, int *b, int *c, int linhas, int colunas){
    int i, j, k;
    for (i = 0; i < linhas; i++) {
        for (j = 0; j < colunas; j++) { 
            k = i * colunas + j;
            *(c + k) = *(a + k) + *(b + k);
        }
    }
    return;
}

int main() {

int linhas, colunas;
int *a, *b, *c;

printf("Digite o numero de linhas");
scanf("%i",&linhas);
printf("Digite o numero de colunas");
scanf("%i", &colunas);

a = alocarMatriz(linhas,colunas);
b = alocarMatriz(linhas,colunas);
c = alocarMatriz(linhas,colunas);

gerarMatriz(a,linhas,colunas);
printf("Primeira Matriz gerada\n");

gerarMatriz(b,linhas,colunas);
printf("Segunda Matriz gerada\n");

mostrarMatriz(a,linhas,colunas);
mostrarMatriz(b,linhas,colunas);

somaMatriz(a,b,c,linhas,colunas);

mostrarMatriz(c,linhas,colunas);

free(a);
free(b);
free(c);

return 0;

}