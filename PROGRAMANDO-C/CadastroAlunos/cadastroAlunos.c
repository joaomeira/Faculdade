#include <stdio.h>

int main()
{
    int idade,
        matricula;
    float altura;
    char nome[20];

    printf("\n\n\n"); //Pula 3 linhas

    //Inserir idade
    printf("Digite sua idade: ");
    scanf("%d", &idade);

    // Inserir altura
    printf("Digite sua altura: ");
    scanf("%f", &altura);

    // Inserir nome
    printf("Digite seu nome: ");
    scanf(" %s", nome);

    // Inserir matricula
    printf("Digite sua matricula: ");
    scanf("%d", &matricula);

    // Resultado 
    printf("\n\n"); // Pula 2 linhas

    printf("Nome do aluno: %s\n", nome);
    printf("Idade: %d anos com %.2f de altura\n", idade, altura);
    printf("Matricula: %06d\n", matricula);


    return 0;
}

