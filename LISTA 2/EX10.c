//Faça um programa, com uma função que recebe como parâmetro uma letra e uma string, e
//retorne um valor inteiro indicando quantas vezes a letra aparece na string. A função main deve
//ler a string, a letra e chamar a função implementada

//AJUSTAR A FUNÇÃO COM APENAS A VARIAVEL LETRA//

#include <stdio.h>
#include <stdlib.h>

int contaLetra(char letra, char *string) {
    int i = 0, cont = 0;
    for (int i = 0; string[i] != '\0'; i++) {
        if (string[i] == letra) {
            cont++;
        }
    }
    return cont;
}


int main() {

    char letra;
    char string[100];
    
    printf("Digite uma palavra: ");
    scanf("%s", string);
    printf("Digite uma letra: ");
    scanf(" %c", &letra);

    printf("A letra '%c' aparece %d vezes na palavra '%s'.\n", letra, contaLetra(letra, string), string);

    

    return 0;
}