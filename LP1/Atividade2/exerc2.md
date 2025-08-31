## Questão 2:
```
#include <stdio.h>
void main (void) {
    printf("Soma = %d\n", 100-"10");
}
```

- O que você espera que aconteça ao compilar o programa? Por quê?
  - Vai dar erro, pois o operador "-" não foi feito para operar com string, muito menos com int e string
- Quais são os tipos dos operandos na operação de subtração?
  - Int e string
- Transcreva a mensagem de erro de compilação e a explique.
  - "Invalid operands to binary" temos um tipo de dado que não é aceito como operante do operador "-" q é o char*, uma string, então o compilador percebe que essa linha não faz sentido e então aborta a compilação
