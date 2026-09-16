/* Questao 20 - Hipotenusa pelo Teorema de Pitagoras
   Compilar: gcc q20.c -o q20 -lm */
#include <stdio.h>
#include <math.h>

int main(void) {
    double a, b;

    printf("Cateto A: ");
    scanf("%lf", &a);
    printf("Cateto B: ");
    scanf("%lf", &b);

    /* Daria no mesmo escrever sqrt(a*a + b*b), que ate e mais rapido */
    printf("\nHipotenusa: %.2f\n", sqrt(pow(a, 2) + pow(b, 2)));

    return 0;
}
