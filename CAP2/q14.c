/* Questao 14 - Area de um triangulo qualquer pela Formula de Heron
   Compilar: gcc q14.c -o q14 -lm   (o -lm e obrigatorio por causa do sqrt) */
#include <stdio.h>
#include <math.h>

int main(void) {
    double a, b, c, p, area;

    printf("Lado a: ");
    scanf("%lf", &a);
    printf("Lado b: ");
    scanf("%lf", &b);
    printf("Lado c: ");
    scanf("%lf", &c);

    p = (a + b + c) / 2.0;              /* semi-perimetro */
    area = sqrt(p * (p - a) * (p - b) * (p - c));

    printf("\nSemi-perimetro : %.2f\n", p);
    printf("Area           : %.2f\n", area);

    /* Se os lados nao formam triangulo, sqrt recebe negativo e devolve
       NaN. O teste (area != area) so e verdadeiro para NaN. */
    printf("%s", (area != area) ?
           "Aviso: esses lados nao formam um triangulo valido.\n" : "");

    return 0;
}
