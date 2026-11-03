#include <stdio.h>

int main(void) {
    int idade;
    int tempo_servico;

    printf("Digite a idade do trabalhador: ");
    if (scanf("%d", &idade) != 1) {
        fprintf(stderr, "Erro: idade invalida.\n");
        return 1;
    }
    printf("Digite o tempo de servico em anos: ");
    if (scanf("%d", &tempo_servico) != 1) {
        fprintf(stderr, "Erro: tempo de servico invalido.\n");
        return 1;
    }

    if (idade < 0 || tempo_servico < 0) {
        fprintf(stderr, "Erro: idade e tempo de servico nao podem ser negativos.\n");
        return 1;
    }

    if (idade >= 65 || tempo_servico >= 30 ||
        (idade >= 60 && tempo_servico >= 25)) {
        printf("O trabalhador pode se aposentar.\n");
    } else {
        printf("O trabalhador ainda nao pode se aposentar.\n");
    }

    return 0;
}
