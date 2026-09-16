/* Questao 26 - Orcamento de cercamento com 3 fios de arame
   Compilar: gcc q26.c -o q26 */
#include <stdio.h>

int main(void) {
    double comprimento, largura, preco, perimetro, arame;

    printf("Comprimento do terreno (m): ");
    scanf("%lf", &comprimento);
    printf("Largura do terreno (m): ");
    scanf("%lf", &largura);
    printf("Preco do metro de arame (R$): ");
    scanf("%lf", &preco);

    perimetro = 2.0 * (comprimento + largura);
    arame = perimetro * 3;   /* cada fio da uma volta completa */

    printf("\nPerimetro        : %.2f m\n", perimetro);
    printf("Arame necessario : %.2f m\n", arame);
    printf("Custo total      : R$ %.2f\n", arame * preco);

    return 0;
}
