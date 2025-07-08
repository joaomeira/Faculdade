#include <stdio.h>

// Desafio Batalha Naval - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de Batalha Naval.
// Siga os comentários para implementar cada parte do desafio.

#define tamanhoX 10 // Estava utilizando int tamanhoX = 10 porem achei mais interessante define mesmo que ainda não tenha sido apresentado.
#define tamanhoY 10 

/* Imprime o tabuleiro atual */
void imprimirTabuleiro(int tabuleiro[tamanhoX][tamanhoY])
{
    char letra = 'A';

    // Cabeçalho alfabetico
    for (int i = 1; i <= tamanhoX; i++)
    {
        printf("\t%c",letra++);
    }
    printf("\n");
    

    for (int i = 0; i < tamanhoY; i++)
    {
        printf("%d", i+1); // Numero das linhas 
        for (int j = 0; j < tamanhoX; j++)
        {
            printf("\t%d", tabuleiro[i][j]); // Conteudo
        }
        printf("\n");
        
    }
}

int main() {
    // Nível Novato - Posicionamento dos Navios
    // Sugestão: Declare uma matriz bidimensional para representar o tabuleiro (Ex: int tabuleiro[5][5];).
    // Sugestão: Posicione dois navios no tabuleiro, um verticalmente e outro horizontalmente.
    // Sugestão: Utilize `printf` para exibir as coordenadas de cada parte dos navios.
    int tabuleiro [tamanhoY][tamanhoX];
    int tamanhoNavio = 3;
    int posicaoX;
    int posicaoY;

    // Preenchimento do tabuleiro com todos os 0
    for (int i = 0; i < tamanhoY; i++)
    {
        for (int j = 0; j < tamanhoX; j++)
        {
            tabuleiro[i][j] = 0;
        }
    }

    // Tabuleiro criado e preenchido.
    printf("Tabuleiro criado!\n");

    imprimirTabuleiro(tabuleiro);

    // Colocando navios no tabuleiro
    printf("\n\nAdicionando navios no tabuleiro:\n\n"); 
    
    // Adicionando navio horizontalmente
    posicaoX = 3;
    posicaoY = 5;

    posicaoX--;
    posicaoY--;
    for (int i = 0; i < tamanhoNavio; i++)
    {
        tabuleiro[posicaoY][posicaoX+i] = 3;
    }

    // Adicionando navio verticalmente
    posicaoX = 8;
    posicaoY = 2;

    posicaoX--;
    posicaoY--;

    for (int i = 0; i < tamanhoNavio; i++)
    {
        tabuleiro[posicaoY+i][posicaoX] = 3;        
    }
    
    imprimirTabuleiro(tabuleiro);

    
    // Nível Aventureiro - Expansão do Tabuleiro e Posicionamento Diagonal
    // Sugestão: Expanda o tabuleiro para uma matriz 10x10.
    // Sugestão: Posicione quatro navios no tabuleiro, incluindo dois na diagonal.
    // Sugestão: Exiba o tabuleiro completo no console, mostrando 0 para posições vazias e 3 para posições ocupadas.

    // Nível Mestre - Habilidades Especiais com Matrizes
    // Sugestão: Crie matrizes para representar habilidades especiais como cone, cruz, e octaedro.
    // Sugestão: Utilize estruturas de repetição aninhadas para preencher as áreas afetadas por essas habilidades no tabuleiro.
    // Sugestão: Exiba o tabuleiro com as áreas afetadas, utilizando 0 para áreas não afetadas e 1 para áreas atingidas.

    // Exemplos de exibição das habilidades:
    // Exemplo para habilidade em cone:
    // 0 0 1 0 0
    // 0 1 1 1 0
    // 1 1 1 1 1
    
    // Exemplo para habilidade em octaedro:
    // 0 0 1 0 0
    // 0 1 1 1 0
    // 0 0 1 0 0

    // Exemplo para habilidade em cruz:
    // 0 0 1 0 0
    // 1 1 1 1 1
    // 0 0 1 0 0

    return 0;
}
