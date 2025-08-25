#include <stdio.h>

int main (void)
{
    //definindo variáveis
    float mi;
    const float km = 1.6;

    //pegando input
    scanf("%f", &mi);

    //printando
    if (mi*km < 80)         printf("Velocidade: %.2f \nAcelere", mi*km);
    else if (mi*km > 100)   printf("Velocidade: %.2f \nDesacelere", mi*km);
    else                    printf("Velocidade: %.2f \nMantenha a velocidade", mi*km);
    return 0;
}
