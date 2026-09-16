/* Questao 27 - Simula o lancamento de tres dados
   Compilar: gcc q27.c -o q27 */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
    int d1, d2, d3;

    /* srand define a semente. Sem ela, rand() repete sempre a mesma
       sequencia. time(NULL) muda a cada execucao.
       Deve ser chamada uma unica vez, no inicio. */
    srand((unsigned int) time(NULL));

    /* rand() %% 6 gera de 0 a 5, entao somo 1 para chegar em 1 a 6.
       Formula geral: rand() %% (max - min + 1) + min */
    d1 = rand() % 6 + 1;
    d2 = rand() % 6 + 1;
    d3 = rand() % 6 + 1;

    printf("Dado 1: %d\n", d1);
    printf("Dado 2: %d\n", d2);
    printf("Dado 3: %d\n", d3);
    printf("Soma  : %d\n", d1 + d2 + d3);

    return 0;
}
