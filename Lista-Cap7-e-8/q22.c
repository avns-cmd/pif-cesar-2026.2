/*
 * Questão 22 – Ponto e Retângulo
 * Enunciado: Use as estruturas Ponto e Retangulo fornecidas no enunciado. Implemente area, perimetro e contemPonto; leia retângulo e ponto e demonstre cópia com r2 = r1.
 *
 * Complete a implementação e teste com diferentes entradas.
 */

#include <stdio.h>

/* Tipos e protótipos */
typedef struct { float x, y; } Ponto;
typedef struct { Ponto inf_esq; Ponto sup_dir; } Retangulo;
float area(Retangulo r);
float perimetro(Retangulo r);
int contemPonto(Retangulo r, Ponto p);

int main(void) {
    /* TODO: implementar a solução da questão */
    return 0;
}
