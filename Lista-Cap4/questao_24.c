#include <stdio.h>

int main(void) {
    int a, b, c;

    printf("Digite os tres angulos inteiros do triangulo: ");
    if (scanf("%d %d %d", &a, &b, &c) != 3) {
        fprintf(stderr, "Erro: informe tres angulos inteiros.\n");
        return 1;
    }

    if (a <= 0 || b <= 0 || c <= 0 || a + b + c != 180) {
        printf("Angulos invalidos: nao formam um triangulo.\n");
        return 0;
    }

    if (a == 90 || b == 90 || c == 90) {
        printf("Triangulo retangulo.\n");
    } else if (a > 90 || b > 90 || c > 90) {
        printf("Triangulo obtusangulo.\n");
    } else {
        printf("Triangulo acutangulo.\n");
    }

    return 0;
}
