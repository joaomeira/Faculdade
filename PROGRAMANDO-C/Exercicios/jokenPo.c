#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    short int   escolhaJogadorA,
                escolhaJogadorB,
                vencedor;

    srand(time(0)); // Inicializa o rand

    // Apresentação do jogo
    printf("Jogo de pedra, papel e tesoura!\n");

    // Entrada de dados jogador A
    printf( "\nJOGADOR A - Você deve escolher uma das opções:\n%s\n%s\n%s\n%s",
            "1- Pedra",
            "2- Papel",
            "3- Tesoura",
            "Escolha uma das opções: ");
    // scanf("%hd",&escolhaJogadorA);
    printf("%d\n",escolhaJogadorA = (rand() % 3)+ 1); // Escolhe um numero aleatorio 

    // Entrada de dados jogador B
    printf( "\nJOGADOR B - Você deve escolher uma das opções:\n%s\n%s\n%s\n%s",
            "1- Pedra",
            "2- Papel",
            "3- Tesoura",
            "Escolha uma das opções: ");
    // scanf("%hd",&escolhaJogadorB);
    printf("%d\n",escolhaJogadorB = (rand() % 3)+ 1); // Escolhe um numero aleatorio 
    
    // Imprimindo escolha do jogador A
    printf("\nJogador A escolheu: ");
    switch (escolhaJogadorA)
    {
    case 1:
        printf("Pedra");
        break;
    case 2:
        printf("Papel");
        break;
    case 3:
        printf("Tesoura");
        break;
    
    default:
        printf("Opção Invalida!");
        return 0;
    }

    // Imprimindo escolha do jogador B
    printf("\nJogador B escolheu: ");
    switch (escolhaJogadorB)
    {
    case 1:
        printf("Pedra");
        break;
    case 2:
        printf("Papel");
        break;
    case 3:
        printf("Tesoura");
        break;
    
    default:
        printf("Opção Invalida!");
        return 0;
    }

    // Calculando a vitoria.
    // 1 = Jogador A ; 2 = Jogador B; 0 = Empate

    if(escolhaJogadorA == escolhaJogadorB) vencedor = 0;
    else if (   escolhaJogadorA == 1 && escolhaJogadorB == 3 ||
                escolhaJogadorA == 2 && escolhaJogadorB == 1 ||
                escolhaJogadorA == 3 && escolhaJogadorB == 2)
                vencedor = 1;
    else vencedor = 2;

    printf("\n%d\n",vencedor);
    

    // Retirado verificador IF poís o programa não continua se houver opção invalida!
    // if(vencedor >= 0) 
    // {
        printf("\n\nO jogador que venceu foi o: ");
        switch (vencedor)
        {
        case 0:
            printf("Empate");
            break;
        case 1:
            printf("Jogador A");
            break;
        case 2:
            printf("Jogador B");
            break;
        }
    // }
    // else printf("Ninguém venceu pois algém selecionou uma opção invalida!");

    return 0;
}
