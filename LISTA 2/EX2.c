//Escreva um programa que lê um vetor real de 15 elementos. Leia também um número. A seguir,
//o programa deve mostrar, sem nenhuma casa decimal, cada elemento do vetor multiplicado pelo
//número lido, em uma função chamada cálculo.

#include <stdio.h>
#include <stdlib.h>


float v[15]; //variavel global.
float n;
int i;

void mostrarVetor (){
    int a;
    for(a=0; a<15; a++){
        printf("%.0f\t", v[a]);
    }
}

void calculo(float x){
    int b;
    for(b=0; b<15; b++){
        v[b] = v[b]* x;
    }
    return;
}

int main() {

printf("Digite um número :\n");
scanf("%f", &n);

for(int i=0; i<15; i++){
       v[i] = rand() % 30;
    }

    mostrarVetor();
    calculo(n);

return 0;
}