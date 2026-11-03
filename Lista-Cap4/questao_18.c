#include <stdio.h>

int main(void) {
    int opcao;
    double temperatura, convertida;

    printf("Conversor de temperatura\n");
    printf("1 - Celsius para Fahrenheit\n");
    printf("2 - Celsius para Kelvin\n");
    printf("3 - Fahrenheit para Celsius\n");
    printf("4 - Kelvin para Celsius\n");
    printf("Escolha uma opcao: ");
    if (scanf("%d", &opcao) != 1) {
        fprintf(stderr, "Erro: opcao invalida.\n");
        return 1;
    }

    if (opcao < 1 || opcao > 4) {
        fprintf(stderr, "Erro: opcao invalida.\n");
        return 1;
    }

    printf("Digite a temperatura: ");
    if (scanf("%lf", &temperatura) != 1) {
        fprintf(stderr, "Erro: temperatura invalida.\n");
        return 1;
    }

    switch (opcao) {
        case 1:
            convertida = temperatura * 1.8 + 32.0;
            printf("Temperatura em Fahrenheit: %.2f F\n", convertida);
            break;
        case 2:
            convertida = temperatura + 273.15;
            printf("Temperatura em Kelvin: %.2f K\n", convertida);
            break;
        case 3:
            convertida = (temperatura - 32.0) / 1.8;
            printf("Temperatura em Celsius: %.2f C\n", convertida);
            break;
        case 4:
            convertida = temperatura - 273.15;
            printf("Temperatura em Celsius: %.2f C\n", convertida);
            break;
        default:
            /* A opcao ja foi validada antes do switch. */
            return 1;
    }

    return 0;
}
