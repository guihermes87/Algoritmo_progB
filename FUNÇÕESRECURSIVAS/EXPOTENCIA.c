
#include <stdio.h>
#include <stdlib.h>

// Função que calcula o fatorial de um número n
// unsigned = tipo de dado que armazena apenas números positivos

unsigned int potenciaRec(unsigned int n, unsigned int y)
{
    if (y == 0)

        return 1; // Caso base: qualquer número elevado a 0 é 1

    else if (y > 0)
        return n * potenciaRec(n, y - 1); // Chamada recursiva
}

int main()
{

    unsigned int d, y;

    printf("Digite um numero para calcular a base: ");
    scanf("%i", &d);
    printf("Digite um numero para calcular o expoente: ");
    scanf("%i", &y);
    printf("Potencia de %i = %i\n", d, potenciaRec(d, y));
    return 0;
}