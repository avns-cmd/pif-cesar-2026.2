/* Questao 25 - Salario com gratificacao de 5%% e imposto de 7%%
   Compilar: gcc q25.c -o q25 */
#include <stdio.h>

int main(void) {
    double base, gratificacao, imposto;

    printf("Salario-base: R$ ");
    scanf("%lf", &base);

    gratificacao = base * 0.05;
    imposto = base * 0.07;

    /* JUSTIFICATIVA DA FORMULA:
       Os dois percentuais incidem sobre o salario-base, nao em
       cascata: a gratificacao nao entra na base do imposto.

           liquido = base + (base * 0.05) - (base * 0.07)

       Colocando a base em evidencia:

           liquido = base * (1 + 0.05 - 0.07) = base * 0.98

       Ou seja, o funcionario recebe 98%% do salario-base.
       Se o imposto incidisse sobre o valor ja gratificado, seria
       base * 1.05 * 0.93 = base * 0.9765, resultado diferente. */

    printf("\nGratificacao (5%%) : R$ %.2f\n", gratificacao);
    printf("Imposto (7%%)      : R$ %.2f\n", imposto);
    printf("Salario liquido   : R$ %.2f\n", base + gratificacao - imposto);

    return 0;
}
