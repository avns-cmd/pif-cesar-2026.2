/* Questao 09 - As quatro operacoes basicas com dois inteiros
   Compilar: gcc q09.c -o q09 */
#include <stdio.h>

int main(void) {
    int n1, n2;
    double divisao;

    printf("Digite o primeiro numero: ");
    scanf("%d", &n1);
    printf("Digite o segundo numero: ");
    scanf("%d", &n2);

    /* O cast (double) evita a divisao inteira. Basta converter
       um dos operandos: o outro se ajusta automaticamente. */
    divisao = (n2 != 0) ? (double) n1 / n2 : 0.0;

    printf("\n%d + %d = %d\n", n1, n2, n1 + n2);
    printf("%d - %d = %d\n", n1, n2, n1 - n2);
    printf("%d * %d = %d\n", n1, n2, n1 * n2);
    printf("%d / %d = %.2f\n", n1, n2, divisao);

    /* COMO EVITAR A DIVISAO POR ZERO:
       Dividir por zero em inteiros trava o programa. Como ainda nao
       vimos if/else neste capitulo, a saida e o operador ternario,
       que e uma expressao e nao um desvio de fluxo:

           divisao = (n2 != 0) ? (double) n1 / n2 : 0.0;

       Foi o que usei acima. A condicao testa o divisor antes de a
       divisao acontecer. */

    printf("%s", (n2 == 0) ? "Aviso: divisor zero, divisao nao realizada.\n" : "");

    return 0;
}
