#include <stdio.h>
#include <stdlib.h>


struct ponto{
int x;
int y;
};


int main(){

struct ponto p1,p2,p3;

printf("Digite as coordenadas do ponto 1");
scanf("%i%i",&p1.x,&p1.y);


printf("Digite as coordenadas do ponto 2");
scanf("%i%i",&p2.x,&p2.y);


printf("Digite as coordenadas do ponto 3");
scanf("%i%i",&p3.x,&p3.y);

if (p3.x <= p1.x || p3.x <= p2.x ||  p3.y >= p1.y || p3.y >= p2.y){
    printf("O ponto 3 esta no plano cartesiano");
} else {
    printf ("O ponto nao esta contido no plano");
}




return 0;

}