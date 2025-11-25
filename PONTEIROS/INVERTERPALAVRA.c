#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char p[30], *pi, *pf, aux;

    pi = p;
    pf = p;     
    
    printf("Digite uma string: ");
    scanf("%s", p);

    
    
    for ( ;*pf; pf++);
    pf--;
    
    for ( ; pi < pf; pi++, pf--) {
        aux = *pi;
        *pi = *pf;
        *pf = aux;

    }
    
    printf ("Palavra invertida: %s", p);
    
    return 0;
    
}
