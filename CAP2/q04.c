/* Questao 04 - Conferindo os operadores de atribuicao composta
   Resultado esperado: a = 19, b = 13, c = 7, d = 4
   Compilar: gcc q04.c -o q04 */
#include <stdio.h>

int main(void) {
    int a = 1, b = 2, c = 3, d = 4;

    printf("Inicial:            a=%d b=%d c=%d d=%d\n", a, b, c, d);

    a += b + c;         /* a = 1 + 5 = 6 */
    printf("a += b + c;         a=%d b=%d c=%d d=%d\n", a, b, c, d);

    b *= c = d + 2;     /* c = 6, depois b = 2*6 = 12 */
    printf("b *= c = d + 2;     a=%d b=%d c=%d d=%d\n", a, b, c, d);

    d %= a + a + a;     /* d = 4 %% 18 = 4 */
    printf("d %%= a + a + a;     a=%d b=%d c=%d d=%d\n", a, b, c, d);

    d -= c -= b -= a;   /* direita para esquerda: b=6, c=0, d=4 */
    printf("d -= c -= b -= a;   a=%d b=%d c=%d d=%d\n", a, b, c, d);

    a += b += c += 7;   /* c=7, b=13, a=19 */
    printf("a += b += c += 7;   a=%d b=%d c=%d d=%d\n", a, b, c, d);

    return 0;
}
