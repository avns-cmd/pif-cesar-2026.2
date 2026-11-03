# Lista de Exercícios - Capítulo 4: Comandos de Decisão

**Disciplina:** Programação Imperativa e Funcional (PIF)  
**Curso:** Análise e Desenvolvimento de Sistemas - CESAR School  
**Semestre indicado na atividade:** 2026.2

## Organização

- `questao_01.md` a `questao_06.md`: respostas das questões teóricas e analíticas, separadas por questão.
- `questao_07.c` a `questao_28.c`: um programa em C independente para cada questão prática.

## Compilação

Os programas foram escritos em C11. Em um terminal com GCC, entre nesta pasta e compile, por exemplo:

```bash
gcc -std=c11 -Wall -Wextra -pedantic questao_08.c -o questao_08
./questao_08
```

As questões que usam funções matemáticas (`sqrt`, `pow` ou `fabs`) podem precisar da biblioteca matemática:

```bash
gcc -std=c11 -Wall -Wextra -pedantic questao_20.c -o questao_20 -lm
./questao_20
```

O mesmo uso de `-lm` se aplica às questões 07, 13 e 19. Para compilar todos os programas, execute individualmente cada arquivo, acrescentando `-lm` nas questões 07, 13, 19 e 20.

## Observações

- Cada programa possui seu próprio `main()` e deve ser compilado separadamente.
- As entradas são verificadas com `scanf` e os programas apresentam mensagens de erro para dados inválidos quando isso é pertinente ao enunciado.
- Na questão 11, os valores são apresentados em ordem crescente; se houver números repetidos, o programa avisa que não é possível formar uma sequência **estritamente** crescente com os valores recebidos.
- Na questão 25, a decomposição considera somente as cédulas informadas no enunciado (R$ 100, R$ 50, R$ 20, R$ 10, R$ 5 e R$ 2). Alguns valores de troco, como R$ 1 ou R$ 3, não podem ser formados com essas cédulas.

> A orientação inicial menciona `Lista-Cap4`, enquanto uma linha posterior cita `Lista-Cap3`. O material foi organizado em `Lista-Cap4`, conforme o título da atividade e o nome solicitado para o arquivo ZIP.
