// DEFINI��O DA ESTRUTURA

#include <stdio.h>
#include <stdlib.h>


struct vendedor {
char cod[20];
float salario;
float vendas;
float comissao;
};

int main(){

// variavel e tipo do dado

struct vendedor v[4];
int i;

for (i=0;i<4;i++) {

printf("Nome vendedor: ");
scanf("%s",&v[i].cod);

printf("Salario fixo vendedor");
scanf("%f", &v[i].salario);

printf("Total de vendas vendedor");
scanf("%f", &v[i].vendas);


//Calculo da comiss�o

    if(v[i].vendas<=1000){
        printf("Comissao 3%%\n");
        v[i].comissao = v[i].vendas *0.03;
            } else if (v[i].vendas <=2000){
                printf("Comissao 5%%\n");
                v[i].comissao = v[i].vendas *0.05;
                } else {
                    printf("Comissao 10%%\n");
                    v[i].comissao = v[i].vendas*0.10;
                }
}

    //EXIBINDO RESULTADOS
    for (i=0;i<4;i++) {
    printf("Comissao vendedor [%s] R$ %.2f\n",v[i].cod,v[i].comissao);
    printf("Salario total R$ %.2f\n", v[i].salario + v[i].comissao);
    }
    return 0;

}
