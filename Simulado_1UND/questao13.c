#include <stdio.h>

int main() {
    int n;
    long long int fatorial = 1;

    printf("Digite um numero inteiro N: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Numero negativo nao tem fatorial.\n");
    } else {
        for (int i = 2; i <= n; i++) {
            fatorial *= i;
        }
        printf("%d! = %lld\n", n, fatorial);
    }

    return 0;
}
