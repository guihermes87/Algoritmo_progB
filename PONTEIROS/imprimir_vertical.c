#include <stdio.h>
#include <stdlib.h>

    void imprime_vertical(char *s) {
    char *p = s;
    while (*p) {
        printf("%c\n", *p);
        p++;
    }
};

int main() {
    
    imprime_vertical("TOMATE CRU");
    return 0;
};
