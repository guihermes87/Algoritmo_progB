#include <stdio.h>
#include <stdlib.h>

void lervetor(int *p)
{
    int i;
    for (i = 0; i < 5; i++)
        scanf("%d", p + i);
    return;
}

void mostrarvetor(int *x)
{
    int i;
    for (i = 0; i < 5; i++)
    {
        printf("%d\t", *(x + i));
    }
}

void somarVetores(int *v1, int *v2, int *v3)
{

    int i;
    for (i = 0; i < 5; i++)
        *(v3 + i) = *(v1 + i) + *(v2 + i);
    return;
}

int main()
{
    int v[5], t[5], s[5];

    lervetor(v);
    lervetor(t);
    mostrarvetor(v);
    mostrarvetor(t);

    somarVetores(v, t, s);

    return 0;
}