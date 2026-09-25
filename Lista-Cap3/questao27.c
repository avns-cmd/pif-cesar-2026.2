#include <stdio.h>

int main() {
    int valor;
    int cedulas[] = {100, 50, 20, 10, 5, 2};
    int quantidade;

    printf("Digite o valor do saque: ");
    scanf("%d", &valor);

    printf("Decomposicao em cedulas:\n");

    for (int i = 0; i < 6; i++) {
        quantidade = valor / cedulas[i];
        if (quantidade > 0) {
            printf("%d cedula(s) de R$ %d\n", quantidade, cedulas[i]);
        }
        valor = valor % cedulas[i];
    }

    return 0;
}
