#include <stdio.h>

int main() {
    int l;

    printf("Digite o lado do quadrado (entre 3 e 20): ");
    scanf("%d", &l);

    for (int linha = 1; linha <= l; linha++) {
        for (int coluna = 1; coluna <= l; coluna++) {
            if (linha == 1 || linha == l || coluna == 1 || coluna == l) {
                printf("X");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}
