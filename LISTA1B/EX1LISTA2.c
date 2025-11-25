#include <stdio.h>
#include <stdlib.h>



struct valor {
    float precodevenda;
    float precodecusto;
    int quantidade;
};

struct produto {
    int id;
    char nome[30];
    struct valor v;
};

int i=0;
char resp;

int main(){

    struct produto prod[30];    
    
    while (i <= 2)

{
    printf("Digite o nome do produto: ");
    scanf("%s", prod[i].nome);
    printf("Digite o id do produto: ");
    scanf("%d", &prod[i].id);
    printf("Digite o valor de venda do produto: ");
    scanf("%f", &prod[i].v.precodevenda);
    printf("Digite o valor de custo do produto: ");
    scanf("%f", &prod[i].v.precodecusto);
    printf("Digite a quantidade do produto: ");
    scanf("%d", &prod[i].v.quantidade);
    
    puts("Produto cadastrado com sucesso!\n");

    printf("%s",prod[i].nome);
    printf("%s",prod[i].id);
    printf("%s",prod[i].v.precodevenda);
    printf("%s",prod[i].v.precodecusto);
    printf("%s",prod[i].v.quantidade);
    printf("\n");

    puts("Deseja cadastrar outro produto? (s/n)");
    scanf("%c", &resp);
    if (resp == 'n'){
        break;
    }
    
    i++;
}

return 0;

}