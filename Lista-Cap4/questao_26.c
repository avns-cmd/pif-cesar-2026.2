#include <stdio.h>

static int ano_bissexto(int ano) {
    return ano % 400 == 0 || (ano % 4 == 0 && ano % 100 != 0);
}

int main(void) {
    int mes, ano, dias;
    const char *nome_mes;

    printf("Digite o numero do mes (1 a 12): ");
    if (scanf("%d", &mes) != 1) {
        fprintf(stderr, "Erro: mes invalido.\n");
        return 1;
    }
    printf("Digite o ano: ");
    if (scanf("%d", &ano) != 1 || ano <= 0) {
        fprintf(stderr, "Erro: informe um ano positivo.\n");
        return 1;
    }

    switch (mes) {
        case 1: nome_mes = "Janeiro"; dias = 31; break;
        case 2: nome_mes = "Fevereiro"; dias = ano_bissexto(ano) ? 29 : 28; break;
        case 3: nome_mes = "Marco"; dias = 31; break;
        case 4: nome_mes = "Abril"; dias = 30; break;
        case 5: nome_mes = "Maio"; dias = 31; break;
        case 6: nome_mes = "Junho"; dias = 30; break;
        case 7: nome_mes = "Julho"; dias = 31; break;
        case 8: nome_mes = "Agosto"; dias = 31; break;
        case 9: nome_mes = "Setembro"; dias = 30; break;
        case 10: nome_mes = "Outubro"; dias = 31; break;
        case 11: nome_mes = "Novembro"; dias = 30; break;
        case 12: nome_mes = "Dezembro"; dias = 31; break;
        default:
            fprintf(stderr, "Erro: mes deve estar entre 1 e 12.\n");
            return 1;
    }

    printf("%s possui %d dias.\n", nome_mes, dias);
    return 0;
}
