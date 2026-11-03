#include <stdio.h>

int main(void) {
    double nota;
    int faltas;
    char conceito;

    printf("Digite a nota final (0 a 10): ");
    if (scanf("%lf", &nota) != 1) {
        fprintf(stderr, "Erro: nota invalida.\n");
        return 1;
    }
    printf("Digite a quantidade de faltas: ");
    if (scanf("%d", &faltas) != 1) {
        fprintf(stderr, "Erro: quantidade de faltas invalida.\n");
        return 1;
    }

    if (nota < 0.0 || nota > 10.0 || faltas < 0) {
        fprintf(stderr, "Erro: informe nota entre 0 e 10 e faltas nao negativas.\n");
        return 1;
    }

    if (nota >= 9.0) {
        conceito = (faltas <= 20) ? 'A' : 'B';
    } else if (nota >= 7.5) {
        conceito = (faltas <= 20) ? 'B' : 'C';
    } else if (nota >= 5.0) {
        conceito = (faltas <= 20) ? 'C' : 'D';
    } else if (nota >= 4.0) {
        conceito = (faltas <= 20) ? 'D' : 'E';
    } else {
        conceito = 'E';
    }

    printf("Conceito do estudante: %c\n", conceito);
    return 0;
}
