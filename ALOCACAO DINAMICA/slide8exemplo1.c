#include <stdio.h>
#include <stdlib.h>


int main(){

    int *x;
    int i =0;

    //printf("Qtde de bytes do int: %d", sizeof(long int));

    // ALOCAÇÃO DINAMICA DE MEMORIA

    x = (int *) malloc(5 * sizeof(int));

    if (!x) {
        printf("Erro na alocação!");
        exit(-1);
    }
    
    for (i=0;i<5;i++){
        //*(x+i) = rand()%10;
        //printf("x[%d] = %d\n", i, *(x+i));

        x[i] = rand()%10;
        printf("x[%d] = %d\n", i, x[i]);
    }

    //DESALOCAR MEMORIA
    free(x);
    
    return 0;
} 