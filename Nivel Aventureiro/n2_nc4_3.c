#include <stdio.h>

int main()
{
    int a = 10;
    float b = 3.5;
    float resultado = a + b; // "a" é convertido para float antes da soma

    printf("Resultado: %.2f \n", resultado);

    return 0;
}