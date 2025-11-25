//ano bissexto  

#include <stdio.h>
#include <stdlib.h>

void ano_bissexto(int ano) {
    if (ano % 400 == 0)
    {
        printf("O ano %d é bissexto.\n", ano);
    }
    else if (ano % 100 == 0)
    {
        printf("O ano %d não é bissexto.\n", ano);
    }
    else if (ano % 4 == 0)
    {
        printf("O ano %d é bissexto.\n", ano);
    }
    else
    {
        printf("O ano %d não é bissexto.\n", ano);
    }
}
 
int main() {
    int ano;
    printf("Digite um ano: ");
    scanf("%d", &ano);

    ano_bissexto(ano);


    return 0;
}