#include <stdio.h>

int main()
{
    float temperatura, umidade;
    unsigned int estoque, estoqueMinimo = 1000;

    printf("Entre com a temperatura: \n");
    scanf("%f", &temperatura); // %f  = float

    printf("Entre com a umidade: \n");
    scanf("%f", &umidade); // %f  = float

    printf("Entre com o estoque: \n");
    scanf("%u", &estoque); // %u  = unsigned int

    if (temperatura > 30)
    {
        printf("Temperatura alta!\n");
    }
    else
    {
        printf("temperatura esta no limite!\n");
    }

    if (umidade > 50)
    {
        printf("Umidade alta!\n");
    }
    else
    {
        printf("Umidade esta dentrodos parametros!\n");
    }

    if (estoque < estoqueMinimo)
    {
        printf("Estoque baixo!\n");
    }
    else
    {
        printf("Estoque normal!\n");
    }
}