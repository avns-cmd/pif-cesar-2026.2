#include <math.h>
#include <stdio.h>

#define EPSILON 1e-9

static int iguais(double x, double y) {
    return fabs(x - y) < EPSILON;
}

int main(void) {
    double a, b, c;

    printf("Digite os tres lados do triangulo: ");
    if (scanf("%lf %lf %lf", &a, &b, &c) != 3) {
        fprintf(stderr, "Erro: informe tres valores reais.\n");
        return 1;
    }

    if (a <= 0.0 || b <= 0.0 || c <= 0.0 ||
        !(a < b + c && b < a + c && c < a + b)) {
        printf("Erro: Os lados fornecidos nao formam um triangulo!\n");
        return 0;
    }

    if (iguais(a, b) && iguais(b, c)) {
        printf("Triangulo equilatero.\n");
    } else if (iguais(a, b) || iguais(a, c) || iguais(b, c)) {
        printf("Triangulo isosceles.\n");
    } else {
        printf("Triangulo escaleno.\n");
    }

    return 0;
}
