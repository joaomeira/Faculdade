#include <stdio.h>

int main(int argc, char const *argv[])
{
    // VARIAVEIS

    int num1, num2;
    int soma, subtracao, multiplicacao, divisao;


    // Entrada de dados
    printf("Digite o numero 1:");
    scanf("%d",&num1);
    printf("Digite o numero 2:");
    scanf("%d",&num2);

    // Operacao de soma
    soma = num1 + num2;

    // Operacao de subtracao
    subtracao = num1 - num2;

    // Operacao de multiplicacao
    multiplicacao = num1 * num2;

    // Operacao de divisao
    divisao = num1 / num2;

    // Imprimir resultados
    printf("A soma é: %d\n",soma);
    printf("A subtração é: %d\n",subtracao);
    printf("A multiplicação é: %d\n",multiplicacao);
    printf("A divisão é: %d\n",divisao);

    return 0;
}