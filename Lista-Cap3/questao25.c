#include <stdio.h>

int main() {
    int n;
    int contadorDivisores = 0;

    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        if (n % i == 0) {
            contadorDivisores++;
        }
    }

    if (n > 1 && contadorDivisores == 2) {
        printf("%d e um numero PRIMO.\n", n);
    } else {
        printf("%d NAO e um numero primo.\n", n);
    }
    printf("Quantidade de divisores encontrados: %d\n", contadorDivisores);

    return 0;
}
