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
    int x = 100, y=20;
    int *p1, *p2, a, *pa;

    a = 10;
    
    p1 = &x;
    p2 = &y;

    *p2 = *p1;
    *p2 = *p2 +5;

    //printf("%p %p\n %d  %d", p1, p2, *p1, *p2); 

    imprime_vertical("TOMATE CRU");

    //int i = 50, *p4, **p5, **p6;
    //p4 = &i;
    //p5 = &p4;
    //p6 = 100;

    //printf("%d", i);
    //printf("\n%d", *p4);
    //printf("\n%d", **p5);
    //printf("\n%d", **p6);


    //printf("%d", *p1)
    //pa = &a;
    //*pa = *pa /2;


   // printf("%d" ,*pa);
   // a == *pa
    //pa == *a
    //pa == &a




    return 0;
}