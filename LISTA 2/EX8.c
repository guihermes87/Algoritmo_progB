//Desenvolva um programa para ler as notas 1, 2 e 3 de um estudante. Em uma função, calcule a
//média aritmética do estudante.

#include <stdio.h>
#include <stdlib.h>


int i;

float media(float a, float b, float c) {
    return (a + b + c) / 3;
}

int main() {

    float nota1, nota2, nota3;

    printf("Digite a primeira nota: ");
    scanf("%f", &nota1);
    printf("Digite a segunda nota: ");
    scanf("%f", &nota2);
    printf("Digite a terceira nota: ");
    scanf("%f", &nota3);

    printf("A média aritmética é: %.2f\n", media(nota1, nota2, nota3));

    return 0;
}