#include <stdio.h>
#include <stdlib.h>

struct produto {
    char tipo[50];
    int ano;
};

int main() {
    struct produto a[10];
    int i, q,sair=1;
    FILE *arquivo;

    arquivo = fopen("dados.txt", "r");

    if (!arquivo) {
        printf("Erro na abertura do arquivo!!!\n");
        exit(-1);
    }


   for (q = 0; sair == 1; q++) {
        if (fscanf(arquivo, "%s %d", a[q].tipo, &a[q].ano) !=2){
            printf("Término da leitura");
            sair = 0;
        }
    }

    fclose(arquivo);
    
}
