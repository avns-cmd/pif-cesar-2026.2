#include <stdio.h>

int main(void) {
    double total, valor_final, comissao;
    int opcao;

    printf("Digite o valor total da compra: R$ ");
    if (scanf("%lf", &total) != 1 || total < 0.0) {
        fprintf(stderr, "Erro: informe um valor valido e nao negativo.\n");
        return 1;
    }

    printf("Forma de pagamento (1 = a vista; 2 = parcelado em 3x): ");
    if (scanf("%d", &opcao) != 1) {
        fprintf(stderr, "Erro: opcao invalida.\n");
        return 1;
    }

    switch (opcao) {
        case 1:
            valor_final = total * 0.90;
            comissao = valor_final * 0.05;
            printf("Valor final com 10%% de desconto: R$ %.2f\n", valor_final);
            break;
        case 2:
            valor_final = total;
            comissao = total * 0.05;
            printf("Valor de cada uma das 3 parcelas: R$ %.2f\n", valor_final / 3.0);
            printf("Valor total parcelado: R$ %.2f\n", valor_final);
            break;
        default:
            fprintf(stderr, "Erro: opcao de pagamento invalida.\n");
            return 1;
    }

    printf("Comissao do vendedor: R$ %.2f\n", comissao);
    return 0;
}
