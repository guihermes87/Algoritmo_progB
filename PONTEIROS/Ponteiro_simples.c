#include <stdio.h>
#include <stdlib.h>

int main() {
    int *p;
    int a = 12;
    printf("O valor de a: %d\n", a);
    p = &a;
    *p=300;
    printf("O valor de a: %d\n", *p);
    

    return 0;
}