/* Questao 18 - Area da superficie e volume de uma esfera
   Compilar: gcc q18.c -o q18 */
#include <stdio.h>

#define PI 3.141593

int main(void) {
    double raio;

    printf("Digite o raio da esfera: ");
    scanf("%lf", &raio);

    /* ATENCAO: escrever 4/3 daria 1 (divisao inteira) e o volume
       sairia 25%% menor. Por isso 4.0/3.0. */
    printf("\nArea da superficie : %.4f\n", 4.0 * PI * raio * raio);
    printf("Volume             : %.4f\n", (4.0 / 3.0) * PI * raio * raio * raio);

    return 0;
}
