
#include <stdio.h>
#include <stdlib.h> 


// Função que calcula o fatorial de um número n
//unsigned = tipo de dado que armazena apenas números positivos

unsigned int fatorial (unsigned int n) { 
    if (n == 0) 
        return 1; 
    else
        return n * fatorial(n - 1);
}

int main() {
    unsigned int d;

    printf("Digite um numero para calcular o fatorial: ");
    scanf("%i", &d);
    printf("fatorial de %i = %i\n", d, fatorial(d));
    return 0;
}