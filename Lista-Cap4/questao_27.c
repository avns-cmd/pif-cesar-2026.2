#include <stdio.h>

int main(void) {
    int horas;
    double total = 0.0;

    printf("Digite o numero de horas inteiras de permanencia: ");
    if (scanf("%d", &horas) != 1 || horas < 0) {
        fprintf(stderr, "Erro: informe uma quantidade de horas nao negativa.\n");
        return 1;
    }

    if (horas >= 1) {
        total += (horas < 2 ? horas : 2) * 2.0;
    }
    if (horas > 2) {
        int horas_faixa = (horas < 4) ? horas - 2 : 2;
        total += horas_faixa * 2.5;
    }
    if (horas > 4) {
        total += (horas - 4) * 3.0;
    }

    printf("Tempo total: %d hora(s)\n", horas);
    printf("Valor final: R$ %.2f\n", total);
    return 0;
}
