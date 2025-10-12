# Questão 8.
Considere o exercício `7`.

- Qual é a relação entre o tamanho do nome de uma `Pessoa` e o tamanho final do
  arquivo gravado?
    - **O tamanho do nome de uma pessoa não influencia no tamanho final do arquivo, pois todas as strings nome[] tem o mesmo tamanho. Porém ao atualizar o código para usar fwrite e fputc, o tamanho do arquivo passa a ser menor quanto menor for o tamanho dos nomes das pessoas no vetor, pois estariamos removendo o lixo após o '\0' que foi gravado no arquivo na primeira forma**
- Altere as funções de leitura e escrita para economizar espaço no disco.
