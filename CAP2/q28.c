/* Questao 28 - Salario anual com imposto progressivo
   Hora normal R$ 10, hora extra R$ 15.
   Isento ate R$ 12.000; 10%% sobre o que passar disso.
   Compilar: gcc q28.c -o q28 */
#include <stdio.h>

int main(void) {
    double horas_normais, horas_extras, bruto, base, imposto;

    printf("Horas normais no ano: ");
    scanf("%lf", &horas_normais);
    printf("Horas extras no ano: ");
    scanf("%lf", &horas_extras);

    bruto = (horas_normais * 10.00) + (horas_extras * 15.00);

    /* O imposto nao incide sobre o salario inteiro, so sobre a parte
       que passa dos 12 mil. O ternario resolve isso sem precisar de if:
       se o bruto nao passou da faixa, a base tributavel e zero. */
    base = (bruto > 12000.00) ? (bruto - 12000.00) : 0.0;
    imposto = base * 0.10;

    printf("\nSalario bruto   : R$ %.2f\n", bruto);
    printf("Base tributavel : R$ %.2f\n", base);
    printf("Imposto (10%%)    : R$ %.2f\n", imposto);
    printf("Salario liquido : R$ %.2f\n", bruto - imposto);
    printf("%s", (imposto == 0.0) ? "\nSituacao: isento de imposto.\n" : "");

    return 0;
}
