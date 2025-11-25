#include <stdio.h>
#include <stdlib.h>

// 1 – Soma dos n primeiros números inteiros maiores que zero.

unsigned int soma(unsigned int n)
{
    if (n == 0)
        return 0;

    else
        (n > 0);
    return n + soma(n - 1); // Chamada recursiva
}

int main()
{

    int n;

    printf("Digite um numero para calcular a soma dos n primeiros numeros inteiros maiores que zero: ");
    scanf("%i", &n);
    printf("Soma dos %i primeiros numeros inteiros maiores que zero = %i\n", n, soma(n));
    return 0;
}