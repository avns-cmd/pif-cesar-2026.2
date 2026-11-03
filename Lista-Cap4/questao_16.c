#include <stdio.h>

int main(void) {
    double distancia, litros, consumo;

    printf("Digite a distancia percorrida (km): ");
    if (scanf("%lf", &distancia) != 1) {
        fprintf(stderr, "Erro: distancia invalida.\n");
        return 1;
    }
    printf("Digite a quantidade de gasolina consumida (litros): ");
    if (scanf("%lf", &litros) != 1) {
        fprintf(stderr, "Erro: quantidade de litros invalida.\n");
        return 1;
    }

    if (distancia < 0.0 || litros <= 0.0) {
        fprintf(stderr, "Erro: a distancia deve ser nao negativa e os litros devem ser maiores que zero.\n");
        return 1;
    }

    consumo = distancia / litros;
    printf("Consumo: %.2f km/l\n", consumo);

    if (consumo < 8.0) {
        printf("Venda o carro!\n");
    } else if (consumo <= 14.0) {
        printf("Economico!\n");
    } else {
        printf("Super economico!\n");
    }

    return 0;
}
