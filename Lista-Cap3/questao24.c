#include <stdio.h>

int main() {
    int n;

    printf("Digite uma dimensao impar N (entre 3 e 19): ");
    scanf("%d", &n);

    for (int linha = 0; linha < n; linha++) {
        for (int coluna = 0; coluna < n; coluna++) {
            if (coluna == linha || coluna == (n - 1 - linha)) {
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}
