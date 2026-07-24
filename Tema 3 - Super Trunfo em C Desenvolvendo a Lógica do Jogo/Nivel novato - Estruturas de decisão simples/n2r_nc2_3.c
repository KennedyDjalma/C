#include <stdio.h>
int main()
{
    int nota;

    printf("Digite sua nota: ");
    scanf("%d", &nota);

    if (nota >= 90)
    {
        printf("Conceito A! \n");
    }
    else if (nota >= 80)
    {
        printf("Conceito B!");
    }
    else if (nota >= 70)
    {
        printf("conceito C! \n");
    }
    else if (nota >= 60)
    {
        printf("Conceito D!");
    }
    else
    {
        printf("Conceito E!");
    }
}