/* Questao 10 - Celsius para Fahrenheit e Kelvin
   Compilar: gcc q10.c -o q10 */
#include <stdio.h>

int main(void) {
    double celsius;

    printf("Digite a temperatura em Celsius: ");
    scanf("%lf", &celsius);

    /* 9.0/5.0 e nao 9/5, que daria 1 por divisao inteira */
    printf("Fahrenheit : %.2f F\n", (celsius * 9.0 / 5.0) + 32.0);
    printf("Kelvin     : %.2f K\n", celsius + 273.15);

    return 0;
}
