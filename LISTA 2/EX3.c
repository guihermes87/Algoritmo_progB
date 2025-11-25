// Escrever um programa que leia dois números e a seguir realize as operações aritméticas básicas
//(+, -, *, /) sobre estes números. Cada uma das operações deve ser implementada em uma função
// diferente.

#include <stdio.h>
#include <stdlib.h>

float n, m; // variavel global.
int i;

float calculosoma(float a, float b)
{
    return a + b;
}
float calculosubtracao(float a, float b)
{
    return a - b;
}
float calculomultiplicacao(float a, float b)
{
    return a * b;
}
float calculodivisao(float a, float b)
{
    if (a == 0 || b == 0)
    {
        printf("Erro! Divisão por zero.\n");
        exit(1);    
    }
    
    return a / b;
}

int main()
{

    printf("Digite 2 números :\n");
    scanf("%f%f", &n, &m);

    printf("A soma dos números é : %.2f\n", calculosoma(n, m));
        printf("A subtração dos números é : %.2f\n", calculosubtracao(n, m));
            printf("A multiplicação dos números é : %.2f\n", calculomultiplicacao(n, m));
                printf("A divisão dos números é : %.2f\n", calculodivisao(n, m));

                    return 0;
}