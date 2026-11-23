/*
 * Questão 27 – Dado Genérico com Union
 * Enunciado: Defina union Valor e struct Registro com tipo INTEIRO, REAL ou CARACTERE. Leia 3 registros, imprima pelo campo correto e mostre sizeof(Valor), explicando em comentário.
 *
 * Complete a implementação e teste com diferentes entradas.
 */

#include <stdio.h>
#include <string.h>

typedef enum { INTEIRO, REAL, CARACTERE } Tipo;
typedef union { int i; float f; char c; } Valor;
typedef struct { Tipo tipo; Valor valor; } Registro;

int main(void) {
    /* TODO: implementar a solução da questão */
    return 0;
}
