#include <stdio.h>
#include <stdlib.h>

// Ler 1 palavra e 1 caracter.Criar uma função que conte quantas vezes o caracter esta na string e o substitua por '*'

int funcaocontar(char *p, char letra)
{
    int cont = 0;
    for (; *p; p++)
    {
        if (*p == letra)
        {
            cont++;
            *p = '*';
        }
    }
    return cont;
}

int main()
{

    char palavra[30], letra;
    int q;

    printf("Digite uma palavra e um caracter: \n");
    scanf("%s", palavra);
    scanf(" %c", &letra);

    q = funcaocontar(palavra, letra);

    printf("Quantidade de vezes: %d\n", q);
    printf("String modificada: %s\n", palavra);

    return 0;
}