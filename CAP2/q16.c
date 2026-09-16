/* Questao 16 - Quantos degraus para alcancar certa altura
   Compilar: gcc q16.c -o q16 */
#include <stdio.h>

int main(void) {
    double degrau_cm, altura_m, altura_cm;
    int degraus;

    printf("Altura de cada degrau (cm): ");
    scanf("%lf", &degrau_cm);
    printf("Altura que deseja alcancar (m): ");
    scanf("%lf", &altura_m);

    /* Unidades diferentes: converto metros para centimetros */
    altura_cm = altura_m * 100.0;

    /* O cast trunca, entao somo 1 degrau quando sobra resto,
       ja que nao existe subir meio degrau. */
    degraus = (int)(altura_cm / degrau_cm);
    degraus += (degraus * degrau_cm < altura_cm) ? 1 : 0;

    printf("\nDegraus necessarios: %d\n", degraus);

    return 0;
}
