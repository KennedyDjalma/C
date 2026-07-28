#include <stdio.h>
int main(){
    int i = 0;
    while (i <= 10)
    {
        if (i % 2 == 0) // (!= refere ao numero impar)
        {
            printf("O numero %d e PAR \n", i);
        }
        i ++;
    }
    return 0;
}