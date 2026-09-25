#include <stdio.h>

int main() {
    double valor, soma = 0.0;
    int quantidade = 0;

    printf("Digite valores positivos (digite um valor negativo para parar):\n");

    scanf("%lf", &valor);
    while (valor >= 0) {
        soma += valor;
        quantidade++;
        printf("Digite outro valor (negativo para parar): ");
        scanf("%lf", &valor);
    }

    if (quantidade > 0) {
        printf("Quantidade de valores: %d\n", quantidade);
        printf("Soma total: %.2f\n", soma);
        printf("Media: %.2f\n", soma / quantidade);
    } else {
        printf("Nenhum valor valido foi digitado.\n");
    }

    return 0;
}
