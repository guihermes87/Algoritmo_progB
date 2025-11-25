#include <stdio.h>
#include <stdlib.h>

// Definindo o limite maximo de medicamentos
#define NUMERO_MEDICAMENTOS 10000

// variaveis globais

struct dados_medicamento
{
    char nome[90];
    char principio_ativo[100];
    char laboratorio[50];
    int quantidade_estoque;
    int codigo;
    float preco_custo;
    char unidade;
    char data_validade[10];
};

struct venda_medicamento
{
    char data_venda[11];
    int dia;
    int mes;
    int ano;
    int quantidade_vendida;
    float preco_venda;
    struct dados_medicamento m;
};



int main()
{
    struct dados_medicamento med[1000];
    struct venda_medicamento venda[1000];
    int i = 0, j = 0, k = 0; 
    char resp;

    do
    {
        printf("=== Cadastro de Medicamentos ===\n");
        printf("Escolha entre as opções abaixo:\n"
               "A - Cadastrar Medicamento\n"
               "B - Registrar Venda\n"
               "C - Visualizar Vendas\n"
               "D - Listar Medicamentos\n"
               "E - Informações vendas\n"
               "F - Sair\n");
        scanf(" %c", &resp);

        switch (resp)
        {
        case 'A':
        case 'a':
            if (i < NUMERO_MEDICAMENTOS)
            {
                printf("Digite o nome do medicamento: ");
                scanf(" %[^\n]", med[i].nome);
                printf("Digite o principio ativo: ");
                scanf(" %[^\n]", med[i].principio_ativo);
                fflush(stdin);
                printf("Digite o laboratorio: ");
                scanf(" %[^\n]", med[i].laboratorio);
                fflush(stdin);
                printf("Digite a quantidade em estoque: ");
                scanf("%d", &med[i].quantidade_estoque);
                printf("Digite o codigo do medicamento: ");
                scanf("%d", &med[i].codigo);
                printf("Digite o preco de custo: ");
                scanf("%f", &med[i].preco_custo);
                printf("Digite a unidade (g, ml, un): ");
                scanf(" %s", &med[i].unidade);
                fflush(stdin);
                printf("Digite a data de validade (DD/MM/AAAA): ");
                scanf(" %[^\n]", med[i].data_validade);

                printf("Medicamento cadastrado com sucesso!\n");
                i++;
            }
            else
            {
                printf("Limite de medicamentos atingido!");
            }
            break;

        case 'B':
        case 'b':
        {
            int i = 0, cod_venda;
            printf("Digite o codigo do medicamento vendido: ");
            scanf("%d", &cod_venda);
            for (int i = 0; i < NUMERO_MEDICAMENTOS; i++)
            {
                if (cod_venda == med[i].codigo)
                {
                    printf("Digite a data da venda (DD/MM/AAAA): ");
                    scanf("%s", venda[j].data_venda);
                    char aux[5];

                    // dia
                    aux[0] = venda[j].data_venda[0];
                    aux[1] = venda[j].data_venda[1];
                    aux[2] = '\0';
                    venda[i].dia = atoi(aux);

                    // mês
                    aux[0] = venda[j].data_venda[3];
                    aux[1] = venda[j].data_venda[4];
                    aux[2] = '\0';
                    venda[j].mes = atoi(aux);

                    // ano
                    aux[0] = venda[j].data_venda[6];
                    aux[1] = venda[j].data_venda[7];
                    aux[2] = venda[j].data_venda[8];
                    aux[3] = venda[j].data_venda[9];
                    aux[4] = '\0';
                    venda[j].ano = atoi(aux);

                    printf("Digite a quantidade vendida: ");
                    scanf("%d", &venda[j].quantidade_vendida);
                    printf("Digite o preco de venda: ");
                    scanf("%f", &venda[j].preco_venda);
                    venda[j].m = med[j];
                    med[j].quantidade_estoque -= venda[j].quantidade_vendida;
                    printf("Venda registrada com sucesso!\n");

                    j++;
                    break;

                } else {
                    printf("Medicamento não encontrado!\n");
                    break;
                    }
            
            }
        
        }

        case 'C':
        case 'c':
            for (k = 0; k < j; k++)
            {
                printf("Venda %d: %s, Qtd: %d, Preço: %.2f, Medicamento: %s\n",
                       k + 1, venda[k].data_venda, venda[k].quantidade_vendida,
                       venda[k].preco_venda, venda[k].m.nome);
            }
            break;

        case 'D':
        case 'd':
            for (int k = 0; k < i; k++)
            {
                printf("Medicamento %d: %s, Estoque: %d, Código: %d\n",
                       k + 1, med[k].nome, med[k].quantidade_estoque, med[k].codigo);
            }
            break;

        case 'E':
        case 'e':
        {
            int mes, ano;
            printf("Digite o mes (MM): ");
            scanf("%d", &mes);
            printf("Digite o ano (AAAA): ");
            scanf("%d", &ano);

            float total = 0;
            for (k = 0; k < j; k++)
            {
                if (venda[k].mes == mes && venda[k].ano == ano)
                {
                    total += venda[k].preco_venda * venda[k].quantidade_vendida;
                }
            }

            printf("Total de vendas em %02d/%04d = R$ %.2f\n", mes, ano, total);
            break;
        }
    

    case 'F':
    case 'f':
        puts("Saindo do programa...");
        break;

    
    }
}
while (resp != 'F' && resp != 'f');

return 0;

}
