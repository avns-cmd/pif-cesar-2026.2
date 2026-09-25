#include <stdio.h>

int main() {
    int n, numero = 1;

    printf("Digite um numero inteiro positivo N: ");
    scanf("%d", &n);

    for (int linha = 1; linha <= n; linha++) {
        for (int coluna = 1; coluna <= linha; coluna++) {
            if (coluna == linha) {
                printf("%d", numero);
            } else {
                printf("%d ", numero);
            }
            numero++;
        }
        printf("\n");
    }

    return 0;
}
