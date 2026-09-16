/* Questao 13 - Area de quadrado, retangulo e triangulo retangulo
   Compilar: gcc q13.c -o q13 */
#include <stdio.h>

int main(void) {
    double lado, base_ret, alt_ret, base_tri, alt_tri;

    printf("Lado do quadrado: ");
    scanf("%lf", &lado);

    printf("Base do retangulo: ");
    scanf("%lf", &base_ret);
    printf("Altura do retangulo: ");
    scanf("%lf", &alt_ret);

    printf("Base do triangulo: ");
    scanf("%lf", &base_tri);
    printf("Altura do triangulo: ");
    scanf("%lf", &alt_tri);

    printf("\nArea do quadrado  : %.2f\n", lado * lado);
    printf("Area do retangulo : %.2f\n", base_ret * alt_ret);
    printf("Area do triangulo : %.2f\n", (base_tri * alt_tri) / 2.0);

    return 0;
}
