#include <stdio.h>

int main (void)
{
    //definindo variaveis
    float preco;
    const float dolar = 3.17;

    //atribuindo valores
    scanf("%f", &preco);

    //print
    if (preco*dolar <= 1000)
    {
        printf("R$%.2f é um bom preço pra um celular!", preco*dolar);
    }
    else
    {
        printf("R$%.2f reais não é um bom preço pra um celular", preco*dolar);
    }
    return 0;
}
