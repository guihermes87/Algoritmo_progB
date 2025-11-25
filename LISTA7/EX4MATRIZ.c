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

void MultiplicarMatriz(int *a, int *b, int *n, int linhas, int colunas){
    int i, j, k;
    for (i = 0; i < linhas; i++) {
        for (j = 0; j < colunas; j++) { 
            k = i * colunas + j;
            *(a + k) = *(b + k) * *n ;
        }
    }
    return;
}

int main() {

int linhas, colunas;
int *a, *b, *c;
int n;

printf("Digite o numero de linhas");
scanf("%i",&linhas);
printf("Digite o numero de colunas");
scanf("%i", &colunas);
printf("Digite o numero para multiplicar a matriz");
scanf("%i", &n);

a = alocarMatriz(linhas,colunas);
b = alocarMatriz(linhas,colunas);
c = alocarMatriz(linhas,colunas);

gerarMatriz(a,linhas,colunas);


gerarMatriz(b,linhas,colunas);


mostrarMatriz(a,linhas,colunas);
printf("\n");
mostrarMatriz(b,linhas,colunas);
printf("\n");
MultiplicarMatriz(a,b,c,linhas,colunas);

mostrarMatriz(c,linhas,colunas);

free(a);
free(b);
free(c);

return 0;

}