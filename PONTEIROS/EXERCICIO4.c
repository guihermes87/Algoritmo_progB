#include <stdio.h>
#include <stdlib.h>

int main() {

    int v[10], *p, i, t[10], *q;
    int r[10], *s;
    p = v;
    q = t;
    
    
    for (i=0; i<10; i++) {
        *(p+i) = rand()%10;
        *(q+i) = rand()%15;
        
        printf ("%d\t%d\n", *(p+i), *(q+i));
    }

    printf ("Soma dos vetores\n");
    for (i=0; i<10;i++) {
        
        *(s+i) = *(p+i) + *(q+i);
        
        printf ("%d\t", *(s+i));
    }

    
    //for (i = 0; i < 10; i++, p++) { 
       // scanf("%d", p); 
    //}
    
    //p = v;

    //for(i = 0; i < 10; i++) { 
       // printf("%d\t", *(p + i));
    //}
    
    return 0;
}