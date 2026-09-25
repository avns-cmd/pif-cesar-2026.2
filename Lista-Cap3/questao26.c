#include <stdio.h>

int main() {
    int a, b;
    long long int somaPrimos = 0;

    printf("Digite o valor de A: ");
    scanf("%d", &a);
    printf("Digite o valor de B (maior que A): ");
    scanf("%d", &b);

    printf("Numeros primos entre %d e %d:\n", a, b);

    for (int n = a; n <= b; n++) {
        int contadorDivisores = 0;

        for (int i = 1; i <= n; i++) {
            if (n % i == 0) {
                contadorDivisores++;
            }
        }

        if (n > 1 && contadorDivisores == 2) {
            printf("%d\n", n);
            somaPrimos += n;
        }
    }

    printf("Soma total dos primos encontrados: %lld\n", somaPrimos);

    return 0;
}
