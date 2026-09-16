/* Questao 24 - Converte km/h para m/s
   Compilar: gcc q24.c -o q24 */
#include <stdio.h>

int main(void) {
    double km_h;

    printf("Velocidade em km/h: ");
    scanf("%lf", &km_h);

    /* 1 km/h = 1000 m / 3600 s, que da 1/3.6 m/s */
    printf("%.2f km/h = %.2f m/s\n", km_h, km_h / 3.6);

    return 0;
}
