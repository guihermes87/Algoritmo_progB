#include   <stdio.h>
#include   <stdlib.h>

struct veiculo {
    char placa[10];
    char nome_proprietario[60];
    char telefone[15];
    float valor_cobrado;
    char realizado_pagamento;
};

void lerveiculo (struct veiculo *p) {
    
    printf ("Digite a placa do veículo: ");
    fflush(stdin);
    scanf ("%s", p->placa);
    printf ("Nome do proprietario: ");
    fflush(stdin);
    scanf ("%s",p->nome_proprietario);
    printf ("Telefone: ");
    scanf ("%s", p->telefone);
    printf ("Valor: ");
    scanf ("%f", &p->valor_cobrado);
    printf ("Realizou o pagamento? (S/N): ");
    scanf (" %c", &p->realizado_pagamento);
    return;
}

void mostrar_veiculo (struct veiculo *p) {

    printf ("\nDados do veiculo:\n");
    printf ("Placa: %s\n", p->placa);
    printf ("Nome: %s\n", p->nome_proprietario);
    printf ("Telefone: %s\n", p->telefone);
    printf ("Valor a pagar: %f\n", p->valor_cobrado);
    printf ("Pagamento realizado: %c\n", p->realizado_pagamento);
};

int main () {

    struct veiculo *ptr;
    int i;

    ptr = (struct veiculo *) malloc (10 * sizeof(struct veiculo));
    
    if (!ptr) {
        printf ("Erro de alocação de memória!\n");
        exit (1);
    }

    for (i = 0; i < 10; i++)
    {
       lerveiculo (&ptr[i]);
    }
    
    for (i = 0; i < 10; i++)
    {
        mostrar_veiculo (&ptr[i]);
    }
    
   
    free (ptr);
    
    return 0;
}