/* Questao 05 - Conferindo as expressoes relacionais e logicas
   Compilar: gcc q05.c -o q05 */
#include <stdio.h>

int main(void) {
    int i = 1, j = 2, k = 3, n = 2;
    float x = 3.3f, y = 4.4f;

    printf("i=%d j=%d k=%d n=%d x=%.1f y=%.1f\n\n", i, j, k, n, x, y);

    printf("a) i < j + 3            = %d\n", i < j + 3);
    printf("b) 2 * i - 7 <= j - 8   = %d\n", 2 * i - 7 <= j - 8);
    printf("c) -x + y >= 2.0 * y    = %d\n", -x + y >= 2.0 * y);
    printf("d) x == y               = %d\n", x == y);
    printf("e) !(n - j)             = %d\n", !(n - j));
    printf("f) !n - j               = %d  <- unico que nao da 0 nem 1\n", !n - j);
    printf("g) i && j && k          = %d\n", i && j && k);

    /* O parenteses abaixo so evita o aviso do compilador.
       A precedencia real e essa mesma: && liga antes de ||. */
    printf("h) i || j - 3 && k      = %d\n", i || ((j - 3) && k));

    printf("i) i < j && 2 >= k      = %d\n", i < j && 2 >= k);
    printf("j) i==2 || j==4 || k==5 = %d\n", i == 2 || j == 4 || k == 5);

    return 0;
}
