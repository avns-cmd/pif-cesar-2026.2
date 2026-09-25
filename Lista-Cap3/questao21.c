#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    char letraSecreta, letraDigitada;
    int tentativas = 0;
    int acertou = 0;

    srand(time(NULL));
    letraSecreta = rand() % 26 + 'a';

    printf("Adivinhe a letra secreta (entre 'a' e 'z'):\n");

    while (!acertou) {
        printf("Digite uma letra: ");
        scanf(" %c", &letraDigitada);
        tentativas++;

        if (letraDigitada == letraSecreta) {
            acertou = 1;
        } else if (letraDigitada < letraSecreta) {
            printf("A letra secreta vem DEPOIS no alfabeto.\n");
        } else {
            printf("A letra secreta vem ANTES no alfabeto.\n");
        }
    }

    printf("Parabens! Voce acertou a letra '%c' em %d tentativa(s).\n",
           letraSecreta, tentativas);

    return 0;
}
