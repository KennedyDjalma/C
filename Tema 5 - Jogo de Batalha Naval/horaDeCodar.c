#include <stdio.h>
int main()
{
    int index;

    char *nomesAlunos[3][3] = { // [3][3] REFERE-SE A UMA MATRIZ 3 X 3.
        {"Aluno 0", "Pt: 30", "Mat: 90"},
        {"Aluno 1", "Pt: 60", "Mat: 60"},
        {"Aluno 2", "Pt: 90", "Mat: 30"}};

    printf("DIGITE O NOME DO ALUNO QUE QUEIRA VER AS NOTAS: \n");
    printf("Aluno 0 digite 0: \n");
    printf("Aluno 1 digite 1: \n");
    printf("Aluno 2 digite 2: \n");

    scanf("%d", &index);

    printf("As notas do %s sao: %s, %s. \n", nomesAlunos[index] [0] , nomesAlunos[index] [1] , nomesAlunos[index] [2] );

    return 0;
}


/*
#include <stdio.h>

int main() {
    int index;

    char *nomesAlunos[][3] = {
        {"Aluno 0", "Pt: 30", "Mat: 90"},
        {"Aluno 1", "Pt: 60", "Mat: 60"},
        {"Aluno 2", "Pt: 90", "Mat: 30"}
    };

    printf("DIGITE O NOME DO ALUNO QUE QUEIRA VER AS NOTAS: \n");
    printf("Aluno 0 digite 0: \n");
    printf("Aluno 1 digite 1: \n");
    printf("Aluno 2 digite 2: \n");

    scanf("%d", &index);

    if (index >= 0 && index < 3) {
        printf("As notas do %s sao: %s, %s.\n",
               nomesAlunos[index][0],
               nomesAlunos[index][1],
               nomesAlunos[index][2]);
    } else {
        printf("Indice invalido!\n");
    }

    return 0;
}

*/