#include <stdio.h>
#include <stdlib.h>

int main() {
    int i = 100;
    int *p1, *p2;
    p1 = &i;
    p2 = p1;
    
    printf("%p  %p", p1, p2);
    
    *p2 = *p2 * 4;
    
    printf("\n %d ", *p1);
    printf("\n %d ", *p2);

    return 0;
}