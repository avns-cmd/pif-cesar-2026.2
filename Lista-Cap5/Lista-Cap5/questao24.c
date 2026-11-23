/* Questão 24 – Compilação Condicional para Depuração
 * Enunciado: Crie int somaAteN(int n). Use #ifdef DEBUG para imprimir a soma parcial dentro do laço. Teste com e sem DEBUG.
 *
 * Complete os TODOs e teste o programa com diferentes entradas.
 */

#include <stdio.h>


/* Protótipos e/ou macros */
int somaAteN(int n);

int main(void) {
    /* TODO: implementar a leitura, chamadas das funções e exibição dos resultados */
    return 0;
}

/* Definições das funções */
int somaAteN(int n) {
    int soma = 0;
    int i;
    for (i = 1; i <= n; i++) {
        soma += i;
        #ifdef DEBUG
        /* TODO: imprimir a soma parcial */
        #endif
    }
    return soma;
}
