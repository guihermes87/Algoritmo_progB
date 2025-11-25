#include <stdio.h> 
#include <stdlib.h>

int funcao1 (int x, int y) {
    int z;
    x++;
    y = x * 2;
    z = x + y;
    return z;
}
int funcao2 ( int *x, int *y ) {
    int z;
    *x = 20;
    *y = *y + *x;
    z =  *y;
    return z;
}

int main () {
    int a, b, c;
    a = 5;
    b = 10;
    
    c = funcao1 (a, b);
    printf ("a = %d, b = %d, c = %d\n", a, b, c);
    

     c = funcao2 (&a, &b);
    printf ("a = %d, b = %d, c = %d\n", a, b, c);
    
    return 0;
}