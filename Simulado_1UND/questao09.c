#include <stdio.h>
#include <math.h>

int main() {
    double a, b, c, p, area;

    printf("Lado a: ");
    scanf("%lf", &a);
    printf("Lado b: ");
    scanf("%lf", &b);
    printf("Lado c: ");
    scanf("%lf", &c);

    p = (a + b + c) / 2.0;
    area = sqrt(p * (p - a) * (p - b) * (p - c));

    printf("Semiperimetro: %.3f\n", p);
    printf("Area: %.3f\n", area);

    return 0;
}
