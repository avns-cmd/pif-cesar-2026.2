#include <math.h>
#include <stdio.h>

int main(void) {
    double a, b, c, delta, x1, x2;

    printf("Digite os coeficientes a, b e c: ");
    if (scanf("%lf %lf %lf", &a, &b, &c) != 3) {
        fprintf(stderr, "Erro: informe tres coeficientes reais.\n");
        return 1;
    }

    if (a == 0.0) {
        fprintf(stderr, "Erro: o coeficiente a deve ser diferente de zero.\n");
        return 1;
    }

    delta = b * b - 4.0 * a * c;
    printf("Delta = %.2f\n", delta);

    if (delta < 0.0) {
        printf("A equacao nao possui raizes reais.\n");
    } else if (delta == 0.0) {
        x1 = -b / (2.0 * a);
        printf("A equacao possui uma raiz real: x = %.2f\n", x1);
    } else {
        x1 = (-b + sqrt(delta)) / (2.0 * a);
        x2 = (-b - sqrt(delta)) / (2.0 * a);
        printf("Duas raizes reais: x1 = %.2f e x2 = %.2f\n", x1, x2);
    }

    return 0;
}
