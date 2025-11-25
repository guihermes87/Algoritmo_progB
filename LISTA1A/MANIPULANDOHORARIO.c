#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct data{

    int dia;
    int mes;
    int ano;
};



int main(){

    char stringData[11];
    struct data data1,data2;
    char aux[5];
    int i=0;

    
    printf("Digite a data em dd/mm/aaaa : ");
    scanf("%s", stringData);
    aux[0] = stringData[0];
    aux[1] = stringData[1];
    aux[2] = '\0';
    data1.dia = atoi(aux);
    aux[0] = stringData[3];
    aux[1] = stringData[4];
    data1.mes = atoi(aux);
    aux[0] = stringData[6];
    aux[1] = stringData[7];
    aux[2] = stringData[8];
    aux[3] = stringData[9];
    aux[4] = '\0';
    data1.ano = atoi(aux);
    
    printf("Digite a segunda data em dd/mm/aaaa : ");
    scanf("%s", stringData);
    aux[0] = stringData[0];
    aux[1] = stringData[1];
    aux[2] = '\0';
    data2.dia = atoi(aux);
    aux[0] = stringData[3];
    aux[1] = stringData[4];
    data2.mes = atoi(aux);
    aux[0] = stringData[6];
    aux[1] = stringData[7];
    aux[2] = stringData[8];
    aux[3] = stringData[9];
    aux[4] = '\0';
    data2.ano = atoi(aux);

    printf("Data 1: %d/%d/%d\n", data1.dia, data1.mes, data1.ano);
    printf("Data 2: %d/%d/%d\n", data2.dia, data2.mes, data2.ano);
    
     if (data1.ano < data2.ano) {
        printf("Data 1 é anterior a Data 2\n");
    } else if (data1.ano > data2.ano) {
        printf("Data 1 é posterior a Data 2\n");
    } else {
        if (data1.mes < data2.mes) {
            printf("Data 1 é anterior a Data 2\n");
        }

    return 0;
}
}


