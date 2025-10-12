# Questão 6.

  - Altere todos os exercícios anteriores para usar o modo binário do `fopen`,
    ex.:
    - `fopen("x.txt", "wb")`
  - Houve alguma mudança de comportamento? Explique.
    - **Ao usar o modo binário se perde um pouco da capacidade de customizar a escrita, por exemplo ao escrever strings elas ficarão com o lixo também escrito, o que não é uma forma otimizada de escrever um arquivo. Porém é muito mais prático para escrever dados como int, que não vão ter toda a questão do '\0'. Em resumo é uma ferramenta que agiliza a escrita básica de um dado, mas que nem sempre vai ser a melhor forma de escrever o mesmo dado**  
