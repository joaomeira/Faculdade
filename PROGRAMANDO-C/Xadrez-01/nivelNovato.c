#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.
    unsigned short int numeroMovimentos, i;

    /* printf("Escolha a quantidade de vezes que as peças irão se mover: ");
    scanf("%hu",&numeroMovimentos); */ // Não precisa equivoco

    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.

    printf("\nMovimento do bispo:\n");

    // * Bispo: 5 casas na diagonal superior direita
    numeroMovimentos = 5; // Conforme exercicio cinco casas para direita.
    for (i = 0; i < numeroMovimentos; i++)
    {
        printf("Cima\n");
        printf("Direita\n");
    }
    
    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.
    
    printf("\nMovimento da Torre:\n");

    // * Torre: 5 casas para a direita
    numeroMovimentos = 5;
    i = 0;
    while (i < numeroMovimentos)
    {
        printf("Direita\n");
        i++;
    }
    

    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.

    printf("\nMovimento da Rainha:\n");

    // * Rainha: 8 casas para a esquerda
    numeroMovimentos = 8;
    i = 0;
    do
    {
        printf("Esquerda\n");
        i++;
    } while (i < numeroMovimentos);
    

    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;
}
