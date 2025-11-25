#include <stdio.h>  
#include <string.h>
#include <stdlib.h>

void lerString(char *str, int t) {
    int i =0;
    
    printf("Digite uma string letra por letra: ");
    
    while (i<t)
    {
        scanf(" %c",&str[i]); // o mesmo que *(str + i)
        fflush(stdin);
        i++;
    }
    
    str[t] = '\0'; // o mesmo que *(str + t) = '\0';
    return;

}

int main () {
   int tam; 
   char *s;
    
   printf("Digite o tamanho da string: ");
    scanf("%d", &tam);

    s = (char *) malloc(tam +1 * sizeof(char));
    if (!s) {
        printf("Erro na alocação!");
        exit(-1);
    }

    lerString(s, tam);

    printf("String lida: %s\n", s);

    free(s);
    return 0;
}