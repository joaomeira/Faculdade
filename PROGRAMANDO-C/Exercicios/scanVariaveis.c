#include <stdio.h>

int main()
{
    int idade;
    float altura;
    char opcao;
    char nome[20];

    printf("Digite sua idade: ");
    scanf("%d", &idade);

    printf("Digite sua altura: ");
    scanf("%f", &altura);

    printf("Digite seu nome: ");
    scanf(" %s", nome); // para string não precisa endereçar & antes..

    printf("Digite a opcao: ");
    scanf(" %c", &opcao); // Para não perder o caracter por conta do Buffer do enter, uma forma é dar espaço antes do %c assim ele só capura o que vinher depois.



    printf("\nA idade do %s é: %d\n",nome, idade);
    printf("\nA altura é: %e\n", altura);
    printf("A altura é: %f\n", altura);
    printf("\nA opção é: %c\n\n\n", opcao);

    /*
    A seguir, você tem uma lista dos principais especificadores utilizados:

        %d: Imprime um inteiro no formato decimal.
        %i: Equivalente a %d.
        %f: Imprime um número de ponto flutuante no formato padrão.
        %e: Imprime um número de ponto flutuante na notação científica.
        %c: Imprime um único caractere.
        %s: Imprime uma cadeia (string) de caracteres.
    */

    return 0; 
}