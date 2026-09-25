# Questão 05

a) No while a condição é testada antes de executar (pode nunca executar).
No do-while o bloco executa primeiro e testa a condição depois (executa
pelo menos uma vez).

b) O for é mais elegante quando já se sabe o número de repetições, pois
junta inicialização, condição e incremento em uma linha só. Ex: percorrer
um vetor de tamanho fixo.

c) Não é erro de compilação, é erro de lógica. O ";" cria um laço vazio.
Se a condição for verdadeira, o programa entra em loop infinito, e o
bloco {} depois vai executar só uma vez (fora do laço), ou nunca, se
travar antes.
