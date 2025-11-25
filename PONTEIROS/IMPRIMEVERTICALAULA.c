#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char s[50], *ps;
    int tam;

    
     
    printf("Digite uma string: ");
    scanf("%s", s);

   
    
    for ( ps = s ;*ps; ps++) {
    
        printf("%c\n", *ps);
        
    }
    
    
    for (ps = s, tam = 0; *ps ; ps++, tam++) {}
    
    printf (" A palavra %s, tem %d letras", s, tam);
    
    return 0;
    
}
