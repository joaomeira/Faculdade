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

    // Mostrar numero do PC
    printf("\nO número do computador é: %u\n", numeroPC);

    switch (opcao)
    {
    case 'M':
    case 'm':
        resultado = numeroJogador > numeroPC ? 1 : 0; // Pra que isso? Só gasta mais linha... 
        break;
    case 'N':
    case 'n':
        resultado = numeroJogador < numeroPC; // Como é 0 ou 1 o proprio c já faz isso quando usamos os operadores...
        break;
    case 'I':
    case 'i':
        resultado = numeroJogador == numeroPC;
        break;
    
    default:
        printf("Opção de jogo inválida!");
        break;
    }

    if (resultado) printf("\n\n###### Você venceu! ######\n\n"); // Da mesma forma não precisa colocar resultado == 1 pois o c já entende que todo valor > 0  é true..
    else printf("\n\n----- Você perdeu! -----\n\n");

    return 0;
}
