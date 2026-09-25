#include <stdio.h>

int main() {
    int n;
    long long int anterior = 1, atual = 1, proximo;

    printf("Digite o numero do termo desejado (N): ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Digite um numero de termo valido (N >= 1).\n");
        return 0;
    }

    printf("Termos da sequencia de Fibonacci:\n");

    if (n >= 1) {
        printf("Termo 1: %lld\n", anterior);
    }
    if (n >= 2) {
        printf("Termo 2: %lld\n", atual);
    }

    for (int termo = 3; termo <= n; termo++) {
        proximo = anterior + atual;
        printf("Termo %d: %lld\n", termo, proximo);
        anterior = atual;
        atual = proximo;
    }

    long long int resultado = (n == 1) ? anterior : atual;
    printf("O termo %d da sequencia de Fibonacci e: %lld\n", n, resultado);

    return 0;
}
