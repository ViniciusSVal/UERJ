## Questão 3
- Qual é a diferença entre tipagem estática e dinâmica?
  - Linguagens estaticas tem os tipos das variáveis definidos durante a compilação e com isso eles não podem mudar, fazendo com que durante a execução do código o programa não tenha que verificar o tipo das variaveis.
  - Já as linguagens dinamicas verificam o tipo da váriavel durante a execução do código, reservando um espaço de memória em cada váriavel para o código saber o tipo dela durante o programa, o que adiciona flexibilidade na programação, o que as tornam melhores para a introdução a programação e ao ensino, mas deixa o código vulnerável a erros durante a execução.
- Dê exemplos de linguagens que usem tipagem estática e exemplos de linguagens que usem tipagem dinâmica.
  - Estaticas: C, java, etc.
  - Dinamicas: Python, Lua, JavaScript, etc.
- Por quê uma linguagem com tipagem estática é tipicamente mais rápida do que uma com tipagem dinâmica? Justifique usando um exemplo.
  - As linguagens estaticas são mais rapidas do que as dinamicas pois as operações não precisam verificar o tipo das variáveis durante a execução, por exemplo no caso:

    ```
    # Python
    n1 = 10
    n2 = 20

    print(n1 + n2)
    ```
    o código em python na parte da operação + vai ter que verificar o tipo das duas variáveis antes de somar, pois ele precisa saber se ele vai concatenar duas strings ou somar dois números. 
    ```
    // C
    
    import <stdio.h>
    
    int main (void)
    {
      int n1 = 10;
      int n2 = 20;
    
      printf("%d", n1 + n1);
    }
    ```
    já em C não temos esse problema, pois ele verifica os tipos das variáveis durante a compilação, então esse passo já foi dado 

    
