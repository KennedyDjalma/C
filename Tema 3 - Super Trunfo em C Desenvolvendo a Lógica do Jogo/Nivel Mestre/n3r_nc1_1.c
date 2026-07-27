// Entendendo o operador ternário em C


/*
// EXEMPLO 1
#include <stdio.h>
int main(){
    int idade = 18;
    int resultado;

    //condicao ? verdadeiro : falso ;

    idade >= 18 ? printf("Voce e maior de idade \n") : printf("Voce e menor de idade \n");

}
*/

//EXEMPLO 2     
#include <stdio.h>
int main(){
    int idade = 18;
    int resultado;

   resultado = idade >= 18? 1 : 0;

   if (resultado == 1){
    printf("Maior de idade");
   } else {
    printf("Menor de idade");
   }
}