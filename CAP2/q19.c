/* Questao 19 - Pagamento do encanador com 8%% de IR na fonte
   Compilar: gcc q19.c -o q19 */
#include <stdio.h>

#define DIARIA 30.00

int main(void) {
    int dias;
    double bruto, imposto;

    printf("Dias trabalhados: ");
    scanf("%d", &dias);

    bruto = dias * DIARIA;
    imposto = bruto * 0.08;

    printf("\nValor bruto   : R$ %.2f\n", bruto);
    printf("IR retido (8%%) : R$ %.2f\n", imposto);
    printf("Valor liquido : R$ %.2f\n", bruto - imposto);

    return 0;
}
