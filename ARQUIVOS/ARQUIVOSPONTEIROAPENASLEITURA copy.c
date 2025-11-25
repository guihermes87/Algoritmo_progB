#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *fp;
    char nome[15], ch;

    printf("Digite o nome do arquivo a ser aberto: ");
    scanf("%s",nome);

    if ((fp = fopen(nome, "r")) == NULL)
    {
        printf("Arquivo não pode ser aberto...PRESSIONE QUALQUER TECLA PARA CONTINUAR");
        getchar();
        exit(1);
    }
    
    printf("ARQUIVO TEXTO ABERTO COM SUCESSO!!!\n");
    
    
        ch = getc(fp);
        while (ch != EOF)
            putchar(ch);
        ch = getc(fp);

    fclose(fp);
}