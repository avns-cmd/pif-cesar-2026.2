#include <math.h>
#include <stdio.h>

int main(void) {
    double numero;

    printf("Digite um numero real: ");
    if (scanf("%lf", &numero) != 1) {
        fprintf(stderr, "Erro: entrada invalida.\n");
        return 1;
    }

    if (numero >= 0.0) {
        printf("Raiz quadrada: %.2f\n", sqrt(numero));
    } else {
        printf("Quadrado do numero: %.2f\n", numero * numero);
    }

    return 0;
}
