# Questão 01 - Diferenças Fundamentais e Tempo de Avaliação de Laços

a) No while a condição é testada ANTES de cada execução do bloco. Se a
condição já for falsa de início, o bloco pode nunca ser executado (mínimo
de 0 execuções). No do-while o bloco é executado primeiro e a condição só
é testada depois, ao final. Isso garante no mínimo 1 execução, independente
da condição.

b) 
- for: é a escolha mais elegante quando o número de repetições é conhecido
  ou controlado por um contador com início, condição de parada e incremento
  bem definidos (ex: percorrer um vetor de tamanho fixo).
- while: é mais adequado quando não se sabe de antemão quantas vezes o
  laço vai repetir, e existe a possibilidade de o bloco não precisar
  executar nenhuma vez (a condição é testada antes).
- do-while: é ideal quando o bloco precisa ser executado obrigatoriamente
  pelo menos uma vez antes de testar a condição, como em menus ou
  validação de entrada de dados (pedir o dado, validar, e repetir só se
  necessário).

c) Não é erro de compilação, é erro de lógica. O ponto e vírgula depois do
while(condicao) cria um laço vazio (com corpo nulo). Se condicao for
verdadeira, esse laço vazio nunca terá seu valor de condicao alterado, e o
programa entra em loop infinito. O bloco {} que viria a seguir não
pertence ao laço - ele só executaria depois que o laço terminasse (ou
nunca, se o laço travar em loop infinito).
