#include <stdio.h>

int main() {
    double nota, soma = 0.0, maior = -1.0, menor = 11.0;
    int quantidade = 0;

    printf("Digite as notas dos alunos (digite -1.0 para parar):\n");
    scanf("%lf", &nota);

    while (nota != -1.0) {
        soma += nota;
        quantidade++;

        if (nota > maior) {
            maior = nota;
        }
        if (nota < menor) {
            menor = nota;
        }

        printf("Digite a proxima nota (-1.0 para parar): ");
        scanf("%lf", &nota);
    }

    if (quantidade > 0) {
        printf("Total de alunos avaliados: %d\n", quantidade);
        printf("Maior nota: %.2f\n", maior);
        printf("Menor nota: %.2f\n", menor);
        printf("Media geral: %.2f\n", soma / quantidade);
    } else {
        printf("Nenhuma nota foi digitada.\n");
    }

    return 0;
}
