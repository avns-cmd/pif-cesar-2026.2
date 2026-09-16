/* Questao 17 - Area e circunferencia de um circulo
   Compilar: gcc q17.c -o q17 */
#include <stdio.h>

#define PI 3.141593

int main(void) {
    double raio;

    printf("Digite o raio do circulo: ");
    scanf("%lf", &raio);

    printf("\nArea           : %.4f\n", PI * raio * raio);
    printf("Circunferencia : %.4f\n", 2.0 * PI * raio);

    return 0;
}
