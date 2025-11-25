#include <stdio.h>
#include <stdlib.h>

struct data {
    int dia;
    int mes;
    int ano;
};

float calculoData(struct data d) {
    return d.dia + d.mes * 30 + d.ano * 365; // aproximação
};

int main(void) {
    struct data data1;
    
    printf("Digite a data em dd/mm/aaaa: ");
    scanf("%2d/%2d/%4d", &data1.dia, &data1.mes, &data1.ano);

    float total = calculoData(data1);
    printf("Data em dias: %.0f\n", total);
    return 0;
}