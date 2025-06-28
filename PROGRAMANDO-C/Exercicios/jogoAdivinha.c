#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(0));

    unsigned short int numeroPC, numeroJogador, resultado;
    char opcao;

    numeroPC = (rand() % 100) + 1;

    // Inicio do jogo
    printf("Escolha o tipo de comparação:\n");
    printf("M- Maior\n");
    printf("N- Menor\n");
    printf("I- Igual\n");

    printf("Escolha a comparação: ");
    scanf(" %c", &opcao);

    printf("Digite o seu número (entre 1 e 100): ");
    scanf(" %hu", &numeroJogador); // $hu; h= short ; u = unsigned


    // Tratamento menu
    switch (opcao)
    {
    case 'M':
    case 'm':
        printf("\nVocê escolheu: MAIOR!\n");
        resultado = numeroJogador > numeroPC ? 1 : 0; // Pra que isso? Só gasta mais linha... 
        break;
    case 'N':
    case 'n':
        printf("\nVocê escolheu: MENOR!\n");
        resultado = numeroJogador < numeroPC; // Como é 0 ou 1 o proprio c já faz isso quando usamos os operadores...
        break;
    case 'I':
    case 'i':
        printf("\nVocê escolheu: IGUAL!\n");
        resultado = numeroJogador == numeroPC;
        break;
    
    default:
        printf("Opção de jogo inválida!");
        break;
    }

    // Mostrar escolhas e numeros
    
    printf("\nO número do computador é  : %u\n", numeroPC);
    printf("O número do jogador é     : %u\n",numeroJogador);

    if (resultado) printf("\n\n###### Você venceu! ######\n\n"); // Da mesma forma não precisa colocar resultado == 1 pois o c já entende que todo valor > 0  é true..
    else printf("\n\n----- Você perdeu! -----\n\n");

    return 0;
}
