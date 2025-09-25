# Questão 1
- Qual é a diferença entre struct e union. Dê exemplos de uso que identifiquem a necessidade dos dois construtores de tipos.
  - Structs são usadas para criar um novo tipo de dado que armazena N valores, de tipos diferentes ou iguais, simultaneamente, enquanto as Unions são usadas para criar um novo tipo de dado que armazena N **opções** de valores, mas que podendo usar só 1 tipo por vez, evitando alocações de memórias desnecessárias
  - Exemplos:
      - Eu quero armazenar os vários produtos que uma padaria vende e salvar o quanto tem de cada um no estoque, nesse caso eu usaria uma struct Padaria com um membro para cada produto vendido.
      - Supondo que eu tenha uma situação em que eu tenha dois valores disjuntos (ou seja, quando eu tenho um eu não tenho o outro e vice versa) eu poderia colocar eles numa union já que eu nunca vou precisar dos dois valores simultaneamente.
      - Agora eu não tenho uma padaria, eu tenho uma loja indefinida, mas ainda preciso armazenar os tipos de produtos que tem no estoque dessa loja, para isso eu criaria uma union Loja com structs para cada tipo de loja dentro dela, exemplo Loja.Padaria.pão ou Loja.Bijuteria.colar, independente da loja que será representada pela union ela não vai ter um excesso muito grande na alocação de memória.
