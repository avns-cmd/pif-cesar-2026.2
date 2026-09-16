/* Questao 06 - Pre-incremento e pos-incremento
   Compilar: gcc q06.c -o q06 */
#include <stdio.h>

int main(void) {
    /* Trecho A: incrementa primeiro, depois atribui */
    int n = 5;
    int x = ++n;
    printf("Trecho A: n = %d, x = %d\n", n, x);

    /* Trecho B: atribui primeiro, depois incrementa */
    int m = 5;
    int y = m++;
    printf("Trecho B: m = %d, y = %d\n", m, y);

    /* Item (b): a linha abaixo esta comentada porque tem
       comportamento indefinido (le e modifica n na mesma expressao):

           printf("%d\t%d\t%d\n", n, n+1, n++);

       Versao correta: */
    int v = 5;
    printf("\nVersao correta: %d\t%d\t%d\n", v, v + 1, v + 2);
    v += 3;

    return 0;
}
