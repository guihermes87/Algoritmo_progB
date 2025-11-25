#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

typedef ponto {

    int x;
    int y;
};
    

int main () {
    
    float distancia;
    ponto p1,p2;

    printf("Digite as coordenadas do ponto 1: \n");
    scanf ("%i%i", &p1.x,&p1.y);

    printf("Digite as coordenadas do ponto 2: \n");
    scanf("%i%i", &p2.x, &p2.y);

    distancia = sqrt(pow(p2.x-p1.x,2)+ pow(p2.y-p1.y,2));

    printf("Distancia entre os pontos = %.2f\n", distancia);

return 0;    

}
