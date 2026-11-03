#include <stdio.h>

int main(void) {
    double laboratorio, semestral, exame, media;

    printf("Nota do Trabalho de Laboratorio (peso 2): ");
    if (scanf("%lf", &laboratorio) != 1) {
        fprintf(stderr, "Erro: nota invalida.\n");
        return 1;
    }

    printf("Nota da Avaliacao Semestral (peso 3): ");
    if (scanf("%lf", &semestral) != 1) {
        fprintf(stderr, "Erro: nota invalida.\n");
        return 1;
    }

    printf("Nota do Exame Final (peso 5): ");
    if (scanf("%lf", &exame) != 1) {
        fprintf(stderr, "Erro: nota invalida.\n");
        return 1;
    }

    if (laboratorio < 0.0 || laboratorio > 10.0 ||
        semestral < 0.0 || semestral > 10.0 ||
        exame < 0.0 || exame > 10.0) {
        fprintf(stderr, "Erro: as notas devem estar entre 0 e 10.\n");
        return 1;
    }

    media = (laboratorio * 2.0 + semestral * 3.0 + exame * 5.0) / 10.0;
    printf("Media ponderada: %.2f\n", media);

    if (media < 3.0) {
        printf("Situacao: Reprovado\n");
    } else if (media < 5.0) {
        printf("Situacao: Em Recuperacao\n");
    } else {
        printf("Situacao: Aprovado\n");
    }

    return 0;
}
