#include <stdio.h>
#include <stdlib.h>

struct cliente
{
    char CPF[15];
    char nome[50];
    char telefone[15];
    char dataultimacompra[11];
    int novo;
    float valor;
};

// declaração da variavel global

struct cliente c[100];

int main()
{

    int i, n;
    for (i = 0; i < 100; i++)
    {

        if (c[i] novo == 1)
        {

            printf("Cliente %d:\n", i + 1);
            printf("Nome: %s\n", c[i].nome);
            printf("CPF: %s\n", c[i].CPF);
            printf("Telefone: %s\n", c[i].telefone);
            printf("Data da Ultima Compra: %s\n", c[i].dataultimacompra);
            printf("\n");
        }
    }
    for (i = 0; i < 100; i++)
    {
        float soma = 0, media;
        s += c[i].valor;
    }
    
    media = soma / 100;
    printf("A media das compras dos clientes eh: %.2f\n", media);
    return 0;
}
