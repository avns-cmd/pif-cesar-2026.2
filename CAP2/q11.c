/* Questao 11 - Converte graus em radianos
   Compilar: gcc q11.c -o q11 */
#include <stdio.h>

#define PI 3.141593

int main(void) {
    double graus;

    printf("Digite o angulo em graus: ");
    scanf("%lf", &graus);

    printf("%.2f graus = %.6f radianos\n", graus, graus * (PI / 180.0));

    return 0;
}
