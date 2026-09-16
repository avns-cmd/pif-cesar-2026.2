/* Questao 15 - Media simples e media ponderada de 4 notas
   Pesos: notas 1 e 2 valem 1; notas 3 e 4 valem 2
   Compilar: gcc q15.c -o q15 */
#include <stdio.h>

int main(void) {
    double n1, n2, n3, n4;

    printf("Nota 1: ");
    scanf("%lf", &n1);
    printf("Nota 2: ");
    scanf("%lf", &n2);
    printf("Nota 3: ");
    scanf("%lf", &n3);
    printf("Nota 4: ");
    scanf("%lf", &n4);

    /* Na ponderada, divide-se pela soma dos pesos: 1+1+2+2 = 6 */
    printf("\nMedia simples   : %.2f\n", (n1 + n2 + n3 + n4) / 4.0);
    printf("Media ponderada : %.2f\n", (n1 + n2 + n3 * 2 + n4 * 2) / 6.0);

    return 0;
}
