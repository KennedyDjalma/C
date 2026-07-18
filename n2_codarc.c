#include <stdio.h>

int main()
{

    int idade;
    float altura;
    char nome[50];
    int matricula;

    printf("Digite sua idade:\n");
    scanf("%d", &idade);

    printf("Digite sua altura:\n");
    scanf("%f", &altura);

    printf("Digite seu nome:\n");
    scanf("%s", &nome);

    printf("Digite sua matricula:\n");
    scanf("%d", &matricula);

    printf("\nNome do aluno: %s - Matricula: %d", nome, matricula);
    printf("\nidade: %d - Altura: %f", idade, altura);

    return 0;
}

/*
Agora você aplicará os conceitos estudados no nível básico, criando um programa em C que gerencia o cadastro de alunos em uma turma. Utilizaremos variáveis para armazenar informações como nome, idade e matrícula dos alunos. Operadores de atribuição serão usados para atualizar os dados conforme necessário.

As funções printf e scanf serão usadas para interagir com o usuário, permitindo a entrada dos dados dos alunos e a exibição das informações cadastradas. Essa prática reforçará seu entendimento sobre variáveis, tipos de dados e funções de entrada e saída, preparando-o para resolver problemas mais complexos.

Confira no vídeo como criar um programa em C para cadastrar os dados dos alunos. Aprenda sobre variáveis, operadores matemáticos e funções de entrada e saída. Siga o passo a passo para usar os comandos printf e scanf.
*/