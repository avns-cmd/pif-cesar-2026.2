#include <stdio.h>

int main() {
    int num;
    int encontrou = 0;

    printf("Digite um numero limite positivo: ");
    scanf("%d", &num);

    for (int i = 1; i <= num; i++) {
        if (i % 3 == 0 && i % 5 == 0) {
            printf("%d\n", i);
            encontrou = 1;
        }
    }

    if (!encontrou) {
        printf("Nenhum numero no intervalo e multiplo de 3 e de 5 ao mesmo tempo.\n");
    }

    return 0;
}
