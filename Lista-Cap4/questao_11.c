#include <stdio.h>

int main(void) {
    int a, b, c, temp;

    printf("Digite tres numeros inteiros: ");
    if (scanf("%d %d %d", &a, &b, &c) != 3) {
        fprintf(stderr, "Erro: informe tres numeros inteiros.\n");
        return 1;
    }

    /* Ordenacao por trocas, sem utilizar vetores. */
    if (a > b) {
        temp = a;
        a = b;
        b = temp;
    }
    if (a > c) {
        temp = a;
        a = c;
        c = temp;
    }
    if (b > c) {
        temp = b;
        b = c;
        c = temp;
    }

    printf("Valores em ordem crescente: %d, %d, %d\n", a, b, c);
    if (a == b || b == c) {
        printf("Atencao: ha valores repetidos; a ordem nao e estritamente crescente.\n");
    } else {
        printf("Os valores estao em ordem estritamente crescente.\n");
    }

    return 0;
}
