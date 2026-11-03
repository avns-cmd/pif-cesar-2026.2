#include <stdio.h>

int main(void) {
    double valor, aliquota, valor_final;
    int estado;

    printf("Digite o valor do produto: R$ ");
    if (scanf("%lf", &valor) != 1 || valor < 0.0) {
        fprintf(stderr, "Erro: informe um valor valido e nao negativo.\n");
        return 1;
    }

    printf("Estado de destino (1 = MG; 2 = SP; 3 = RJ; 4 = MS): ");
    if (scanf("%d", &estado) != 1) {
        fprintf(stderr, "Erro: codigo de estado invalido.\n");
        return 1;
    }

    switch (estado) {
        case 1:
            aliquota = 0.07;
            break;
        case 2:
            aliquota = 0.12;
            break;
        case 3:
            aliquota = 0.15;
            break;
        case 4:
            aliquota = 0.08;
            break;
        default:
            fprintf(stderr, "Erro: codigo de estado invalido.\n");
            return 1;
    }

    valor_final = valor * (1.0 + aliquota);
    printf("Preco final com imposto: R$ %.2f\n", valor_final);
    return 0;
}
