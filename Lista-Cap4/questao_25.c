#include <stdio.h>

int main(void) {
    int valor_compra, valor_pago, troco;
    int n100, n50, n20, n10, n5, n2;

    printf("Digite o valor total a pagar (inteiro em reais): R$ ");
    if (scanf("%d", &valor_compra) != 1 || valor_compra <= 0) {
        fprintf(stderr, "Erro: informe um valor inteiro positivo.\n");
        return 1;
    }
    printf("Digite o valor entregue pelo cliente: R$ ");
    if (scanf("%d", &valor_pago) != 1 || valor_pago <= 0) {
        fprintf(stderr, "Erro: informe um valor inteiro positivo.\n");
        return 1;
    }

    if (valor_pago < valor_compra) {
        printf("Erro: valor entregue insuficiente.\n");
        return 0;
    }

    troco = valor_pago - valor_compra;
    printf("Troco: R$ %d\n", troco);

    /*
       As cedulas de R$ 100, 50, 20, 10 e 5 sao escolhidas em ordem.
       Quando a escolha deixaria resto 1 ou 3, devolvemos uma cedula
       daquela denominacao para que o restante possa ser formado com
       as cedulas menores. Assim, o valor e composto com o menor numero
       de cedulas disponiveis. R$ 1 e R$ 3 nao podem ser decompostos.
    */
    n100 = troco / 100;
    troco %= 100;
    if ((troco == 1 || troco == 3) && n100 > 0) {
        n100--;
        troco += 100;
    }

    n50 = troco / 50;
    troco %= 50;
    if ((troco == 1 || troco == 3) && n50 > 0) {
        n50--;
        troco += 50;
    }

    n20 = troco / 20;
    troco %= 20;
    if ((troco == 1 || troco == 3) && n20 > 0) {
        n20--;
        troco += 20;
    }

    n10 = troco / 10;
    troco %= 10;
    if ((troco == 1 || troco == 3) && n10 > 0) {
        n10--;
        troco += 10;
    }

    n5 = troco / 5;
    troco %= 5;
    if ((troco == 1 || troco == 3) && n5 > 0) {
        n5--;
        troco += 5;
    }

    n2 = troco / 2;
    troco %= 2;

    if (troco != 0) {
        printf("Nao e possivel formar o troco exato com as cedulas disponiveis.\n");
        return 0;
    }

    printf("Cedulas de R$ 100: %d\n", n100);
    printf("Cedulas de R$ 50:  %d\n", n50);
    printf("Cedulas de R$ 20:  %d\n", n20);
    printf("Cedulas de R$ 10:  %d\n", n10);
    printf("Cedulas de R$ 5:   %d\n", n5);
    printf("Cedulas de R$ 2:   %d\n", n2);
    printf("Total de cedulas: %d\n", n100 + n50 + n20 + n10 + n5 + n2);

    return 0;
}
