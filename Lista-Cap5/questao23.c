/* Questão 23 – Macro versus Função
 * Enunciado: Compare #define DOBRO(x) x*2 com int dobro(int x), chamando ambas com 2+3. Explique em comentário e corrija a macro.
 *
 * Complete os TODOs e teste o programa com diferentes entradas.
 */

#include <stdio.h>


/* Protótipos e/ou macros */
#define DOBRO(x) x*2
/* Depois, teste a versão protegida: #define DOBRO(x) ((x) * 2) */
int dobro(int x);

int main(void) {
    /* TODO: implementar a leitura, chamadas das funções e exibição dos resultados */
    return 0;
}

/* Definições das funções */
int dobro(int x) {
    /* TODO: retornar o dobro de x */
    return 0;
}
