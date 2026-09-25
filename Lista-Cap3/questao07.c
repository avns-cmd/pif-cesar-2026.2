#include <stdio.h>

void contagemFor() {
    printf("--- Usando for ---\n");
    for (int i = 0; i <= 100; i++) {
        printf("%d\n", i);
    }
}

void contagemWhile() {
    printf("--- Usando while ---\n");
    int i = 0;
    while (i <= 100) {
        printf("%d\n", i);
        i++;
    }
}

void contagemDoWhile() {
    printf("--- Usando do-while ---\n");
    int i = 0;
    do {
        printf("%d\n", i);
        i++;
    } while (i <= 100);
}

int main() {
    contagemFor();
    contagemWhile();
    contagemDoWhile();
    return 0;
}

/*
 * A estrutura mais adequada para este caso é o "for", pois o numero de
 * repeticoes (de 0 a 100) e conhecido desde o inicio. O for reune
 * inicializacao, condicao e incremento em uma unica linha, deixando o
 * codigo mais compacto, claro e menos propenso a erros do que o while
 * ou o do-while para este tipo de contagem simples.
 */
