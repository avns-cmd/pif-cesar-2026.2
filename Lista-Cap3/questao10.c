#include <stdio.h>

int main() {
    int contador = 0;

    for (int i = 1; i <= 100; i++) {
        printf("%d\t", i * 3);
        contador++;

        if (contador % 10 == 0) {
            printf("\n");
        }
    }

    return 0;
}
