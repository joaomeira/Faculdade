#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    short int   escolhaJogadorA,
                escolhaJogadorB,
                vencedor;

    // Apresentação do jogo
    printf("Jogo de pedra, papel e tesoura!\n");

    // Entrada de dados jogador A
    printf( "\nJOGADOR A - Você deve escolher uma das opções:\n%s\n%s\n%s\n%s",
            "1- Pedra",
            "2- Papel",
            "3- Tesoura",
            "Escolha uma das opções: ");
    scanf("%hd",&escolhaJogadorA);

    // Entrada de dados jogador B
    printf( "\nJOGADOR B - Você deve escolher uma das opções:\n%s\n%s\n%s\n%s",
            "1- Pedra",
            "2- Papel",
            "3- Tesoura",
            "Escolha uma das opções: ");
    scanf("%hd",&escolhaJogadorB);
    
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

    switch (escolhaJogadorA)
    {
    case 1:
        switch (escolhaJogadorB)
        {
        case 1:
            vencedor = 0;
            break;
        case 2:
            vencedor = 2;
            break;
        case 3:
            vencedor = 1;
            break;
        default:
            vencedor = -1;
            break;
        }
        break;
    case 2:
        switch (escolhaJogadorB)
        {
        case 1:
            vencedor = 1;
            break;
        case 2:
            vencedor = 0;
            break;
        case 3:
            vencedor = 2;
            break;
        default:
            vencedor = -1;
            break;
        }
        break;
    case 3:
        switch (escolhaJogadorB)
        {
        case 1:
            vencedor = 2;
            break;
        case 2:
            vencedor = 1;
            break;
        case 3:
            vencedor = 0;
            break;
        default:
            vencedor = -1;
            break;
        }
        break;
    
    default:
        vencedor = -1;
        break;
    }

    if(vencedor >= 0) 
    {
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

        default:
            printf("Ninguém.");
            break;
        }
    }
    else printf("Ninguém venceu pois algém selecionou uma opção invalida!");

    return 0;
}
