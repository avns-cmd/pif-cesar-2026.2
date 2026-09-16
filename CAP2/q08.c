/* Questao 08 - Quadrado e decima parte de um numero
   Compilar: gcc q08.c -o q08 */
#include <stdio.h>

int main(void) {
    int numero;
    double decima;

    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);

    /* Cuidado: numero / 10 daria divisao inteira (25/10 = 2).
       Com 10.0 o calculo vira real. */
    decima = numero / 10.0;

    printf("Quadrado      : %d\n", numero * numero);
    printf("Decima parte  : %.2f\n", decima);

    return 0;
}
