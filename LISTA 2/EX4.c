//Escreva um programa que leia o preço de um produto, em reais, e o percentual de desconto.
//Faça uma função para calcular e retornar o valor do desconto em reais.

#include <stdio.h>
#include <stdlib.h>

float desconto(float a)

int main(void) {

printf("Digite o valor do produto: ");
scanf("%f", &a);
printf("Digite o percentual de desconto: ");
scanf("%f", &b);

desconto(a);

}


float desconto(float a, float b) {
    
    return a * (b / 100);
    printf("O valor do desconto é: %.2f", desconto(a, b));
}