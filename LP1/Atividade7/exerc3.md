# Questão 3.

- Considerando o terminador `\0`, que cuidados são necessários ao lidar com
  strings e arquivos em C...
    - ... ao escrever uma string para um arquivo?
      - **Como o '\0' não é entendido em editores de texto, é necessário removê-lo na hora de escrever no arquivo, isso se o arquivo for criado para ser lido em editores de texto, no caso de arquivos "binários" escrever o '\0' só vai ser necessário quando quisermos escrever de forma otimizada, assim usando o '\0' para evitar escrever lixo no arquivo, caso contrário o '\0' só seria um byte extra a ser escrito, não tendo nenhuma funcionalidade no arquivo**
    - ... ao ler uma string de um arquivo?
      - **Você geralmente vai querer colocar o '\0' no índice final da string lida, por segurança. Porém caso o arquivo tenha o propósito de ser lido em editores de texto, ou seja "binário" e gravado de forma otimizada, você vai querer colocar o '\0' no ultimo índice gravado na string**      
