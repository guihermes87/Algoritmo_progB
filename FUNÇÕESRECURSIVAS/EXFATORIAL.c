
#include <stdio.h>
#include <stdlib.h> 


// Função que calcula o fatorial de um número n
//unsigned = tipo de dado que armazena apenas números positivos

unsigned int fatorial(unsigned int n) { 
    int i;
    unsigned int fat = 1;
    for (i = 1; i <= n; i++) {
        fat = fat * i;
    }
    return fat;
}

int main() {
    unsigned int d;

    printf("Digite um numero para calcular o fatorial: ");
    scanf("%i", &d);
    printf("Fatorial de %i = %i\n", d, fatorial(d));
    return 0;
}