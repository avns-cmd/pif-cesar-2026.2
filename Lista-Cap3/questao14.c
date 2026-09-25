#include <stdio.h>

int main() {
    long long int somaQuadrados = 0;

    for (int i = 1; i <= 100; i++) {
        int quadrado = i * i;
        printf("%d -> %d\n", i, quadrado);
        somaQuadrados += quadrado;
    }

    printf("Soma total dos quadrados: %lld\n", somaQuadrados);

    return 0;
}
