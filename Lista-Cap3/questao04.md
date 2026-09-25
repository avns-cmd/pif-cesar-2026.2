# Questão 04 - Comandos de Desvio de Fluxo: break vs. continue

a) Quando o comando break é acionado dentro de um laço for ou while, o
programa interrompe IMEDIATAMENTE a execução daquele laço por completo, e
o fluxo desvia para a primeira instrução localizada logo depois do laço
(nenhuma outra iteração é executada).

b) Quando o comando continue é acionado dentro de um laço for, o programa
interrompe apenas a ITERAÇÃO ATUAL, pulando o restante das instruções que
ainda estavam dentro do corpo do laço naquela passagem. Em seguida, a
expressão de INCREMENTO do cabeçalho do for é executada imediatamente
(é a terceira expressão do for), e só depois disso a condição é
reavaliada para decidir se o laço continua.

c) Em laços aninhados (um for interno dentro de um for externo), o break
dentro do laço interno interrompe apenas o laço INTERNO (o mais próximo
de onde o break foi escrito). O laço externo não é afetado e continua sua
execução normalmente, avançando para a próxima iteração dele.
