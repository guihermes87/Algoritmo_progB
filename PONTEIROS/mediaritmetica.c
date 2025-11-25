#include <stdio.h>
#include <stdlib.h>

int main() {
    
    float a, b;
    float media;
    float *p1, *p2, *pmedia;

    

    p1 = &a;
    p2 = &b;
    pmedia = &media;
    
    printf("Digite dois valores: ");
    scanf("%f %f",p1,p2);

    printf("%d %d\n", p1, p2);
    //media = (a+b) / 2;

    *pmedia = (*p1 + *p2) / 2;
    
    printf("A media entre %f e %f = %.2f", *p1, *p2, media);


    return 0;
}