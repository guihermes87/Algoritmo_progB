#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x, y, *P1, *P2;
    x = 10;
    P1 = &x;
    y = *P1 * 2;
    
    printf("%d, %d, %d\n", x, *P1, y);
    
    P2 = &x;
    *P2 = 30;
    
    printf("%d, %d, %d\n", x, *P1, y);

    printf("%d\n", sizeof(int));
    printf("%d\n", sizeof(double));
    printf("%d\n", sizeof(char));
    printf("%d\n", sizeof(float));
    printf("%d\n", sizeof(long));
    printf("%d\n", sizeof(short));
    
    return 0;
}