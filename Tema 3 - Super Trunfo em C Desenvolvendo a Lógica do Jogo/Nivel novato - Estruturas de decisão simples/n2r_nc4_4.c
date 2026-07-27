#include <stdio.h>

int main(){

    int dia = 3;

    printf("Entre o valor do dia! \n");
    scanf("%d", &dia);
    
    switch (dia)
    {
        case 1:
            printf("DOMINGO");
            break;
        
        case 2:
            printf("SEGUNDA");
            break;
        
        case 3:
            printf("TERCA");
            break;
        
        case 4:
            printf("QUARTA");
            break;
        
        case 5:
            printf("QUINTA");
            break;
        
        case 6:
            printf("SEXTA");
            break;
        
        case 7:
            printf("SABADO");
            break;
        
        default:
        printf("DIA INVALIDO");
        break;
    }
}