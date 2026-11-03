#include <stdio.h>

int main(void) {
    int numero;

    printf("Digite um numero inteiro: ");
    if (scanf("%d", &numero) != 1) {
        fprintf(stderr, "Erro: entrada invalida.\n");
        return 1;
    }

    if (numero % 2 == 0) {
        printf("Paridade: PAR\n");
    } else {
        printf("Paridade: IMPAR\n");
    }

    if (numero > 0) {
        printf("Sinal: POSITIVO\n");
    } else if (numero < 0) {
        printf("Sinal: NEGATIVO\n");
    } else {
        printf("Sinal: ZERO\n");
    }

    return 0;
}
