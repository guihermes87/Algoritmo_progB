#include <stdio.h>
#include <string.h>

char exibir_asteriscos(const char *palavra, char *exibicao) {
    int i;
    for (i = 0; i < strlen(palavra); i++) {
        exibicao[i] = '*';
    }
    exibicao[i] = '\0';
    printf("Exibição inicial: %s\n", exibicao);
}


int verificar_letra(char *palavra, char *exibicao, char letra) {
    int i, encontrou = 0;

    for (i = 0; i < strlen(palavra); i++) {
        if (palavra[i] == letra && exibicao[i] == '*') {
            exibicao[i] = letra;
            encontrou = 1;
        }
    }

    return encontrou;
}

int main() {
    char palavra[21];
    char exibicao[21];
    char letra;
    int tentativas = 6;
    int acertos = 0;

    printf("Digite uma palavra de até 20 letras: ");
    scanf("%s", palavra);

    exibir_asteriscos(palavra, exibicao);

    while (tentativas > 0 && acertos < strlen(palavra)) {
        printf("\nDigite uma letra: ");
        scanf(" %c", &letra);

        int encontrou = verificar_letra(palavra, exibicao, letra);

        if (encontrou) {
            printf("Parabéns! A letra '%c' está na palavra.\n", letra);

            // Atualiza quantidade de acertos
            acertos = 0;
            for (int i = 0; i < strlen(palavra); i++) {
                if (exibicao[i] != '*') acertos++;
            }
        } else {
            tentativas--;
            printf("Letra '%c' não encontrada. Você possui %d tentativas.\n", letra, tentativas);
        }

        printf("Resultado: %s\n", exibicao);
    }

    if (acertos == strlen(palavra)) {
        printf("\nVocê acertou a palavra completa: %s\n", palavra);
    } else {
        printf("\nSuas tentativas acabaram! A palavra era: %s\n", palavra);
    }

    return 0;
}
