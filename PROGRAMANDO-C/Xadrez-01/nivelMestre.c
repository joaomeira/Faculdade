#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

/* Printa um erro já formatado entre ### */
void printErro(char mensagem[])
{
    printf("\n##############################################\n");
    printf("ERRO: %s", mensagem);
    printf("\n##############################################\n");
}

/* Printa na tela direita e já pula 1 linha */
void printDireita()
{
    printf("Direita\n");
}

/* Printa na tela esquerda e já pula 1 linha */
void printEsquerda()
{
    printf("Esquerda\n");
}

/* Printa na tela cima e já pula 1 linha */
void printCima()
{
    printf("Cima\n");
}

/* Printa na tela baixo e já pula 1 linha */
void printBaixo()
{
    printf("Baixo\n");
}

/* Printa a direção de acordo com a letra enviada em CHAR

'd' = direita
'e' = esquerda
'c' = cima
'b' = baixo
*/
void printDirecao(char letra)
{
    switch (letra)
    {
    case 'd':
        printDireita();
        break;
    case 'e':
        printEsquerda();
        break;
    case 'c':
        printCima();
        break;
    case 'b':
        printBaixo();
        break;
    
    default:
        break;
    }
}

/* Verifica se a direção é valida

Direcoes aceitas
'd' = direita
'e' = esquerda
'c' = cima
'b' = baixo
Retorna = 1

Do contrario retorna 0 = false*/
int verificaDirecaoValida(char direcao)
{
    switch (direcao)
    {
    case 'd':
    case 'D':
        return 1;
        break;
    case 'e':
    case 'E':
        return 1;
        break;
    case 'c':
    case 'C':
        return 1;
        break;
    case 'b':
    case 'B':
        return 1;
        break;
    
    default:
        return 0;
        break;
    }

    return 0; //redundancia.
}

/* Movimento do Cavalo

quantidade = quantidade de movimentos
direcao = a direcao do movimento
finalizacao = para onde vai finalizar o movimento (direcao tambem)

Direcoes aceitas
'd' = direita
'e' = esquerda
'c' = cima
'b' = baixo

Ps: Lembrar qeu direcao e finalização sempre tem que ser o oposto verticalmente ou horizointalmente...*/
void movimentoCavalo(int quantidade, char direcao, char finalizacao)
{
    /* TRATAMENTO DE ERROS 
    Irá verificar se a peça tem a finalização correta mediante a direção escolhida*/
    
    if (!(verificaDirecaoValida(direcao) && verificaDirecaoValida(finalizacao)))
    {
        printErro("Você deve escolher uma direcao valida!");
    }
    else if  (
            (       // Aqui verifica as direçoes horizontais
                (direcao == 'd' || direcao == 'e') &&
                (finalizacao == 'd' || finalizacao == 'e')
            ) || (  // Aqui veirifca as direções verticais
                (direcao == 'c' || direcao == 'b') &&
                (finalizacao == 'b' || finalizacao == 'c')
            )
        )
    {
        printErro("Direcao e finalização sempre tem que ser o oposto verticalmente ou horizontalmente.");
        return; //Sai da funcao
    }
    else if (quantidade > 0)
    {
        int i = 3; // quantidade de casas que o cavalo anda quando se movimenta.

        while (i > 0)
        {
            i--;
            printDirecao(direcao);
            if (i > 1) continue; // Tinha que usar o continue.... A logica é simples enquanto nao for o ultimo movimento ele volta no inicio do loop
            printDirecao(finalizacao); 
            break; // Tinha que usar o break.....  A logica é simples realizou o ultimo movimento sai do loop
        }

        /* Jeito mais simples.... */
        // for (size_t i = 0; i < 2; i++)
        // {
        //     printDirecao(direcao);
        // }
        // printDirecao(finalizacao);

        movimentoCavalo(quantidade - 1,direcao,finalizacao);
    }

}

/* Movimenta o Bispo 

quantidade = quantas casas ira andar
valor = direção diagonal do bispo

O bispo pode ir em quatro direções diagonais
1- Direita acima
2- Direita abaixo
3- Esquerda abaixo
4- Esquerda acima*/
void movimentoBispo(int quantidade, unsigned short int valor )
{
    char direcaoDiagA, direcaoDiagB;

    switch (valor)
    {
    case 1:
        direcaoDiagA = 'd';
        direcaoDiagB = 'c';
        break;
    case 2:
        direcaoDiagA = 'd';
        direcaoDiagB = 'b';
        break;
    case 3:
        direcaoDiagA = 'e';
        direcaoDiagB = 'b';
        break;
    case 4:
        direcaoDiagA = 'e';
        direcaoDiagB = 'c';
        break;
    
    default:
        // ja trata erro se preciso.
        printErro("Você não escolheu um numero direcional correto! 1 a 4");
        return;
        break;
    }

    if (quantidade > 0)
    {
        // movimentoBispo(quantidade - 1 ,valor); // Antes para a quantidade aparecer em ordem crescente
        // printf("%d- ",quantidade); Para ver quantidade de movimentos
        printDirecao(direcaoDiagA);
        // printf("%d- ",quantidade); Para ver quantidade de movimentos
        printDirecao(direcaoDiagB);
        movimentoBispo(quantidade - 1 ,valor);
    }
}

/* Movimento da Torre

quantidade = quantidade de movimentos
direcao = a direcao do movimento

Direcoes aceitas
'd' = direita
'e' = esquerda
'c' = cima
'b' = baixo */
void movimentoTorre(int quantidade, char direcao)
{
    /* Tratamento de erro  */
    if (!verificaDirecaoValida(direcao))
    {
        printErro("Você não escolheu uma direção corretamente!");
    }
    else if (quantidade > 0)
    {
        printDirecao(direcao);
        movimentoTorre(quantidade - 1, direcao);
    }
    
    
}

/* Movimento da Rainha

A rainha pode realizar o movimento da torre ou bispo.

Você irá escolher a direção de acordo com os numeros.

Direcoes diagonais
1 = Direita acima
2 = Direita abaixo
3 = Esquerda abaixo
4 = Esquerda acima

Direcoes retas
5 = Cima
6 = Direita
7 = Baixo
8 = Esquerda
*/
void movimentoRainha(int quantidade, unsigned short int valor)
{
    switch (valor)
    {
    case 1:
    case 2:
    case 3:
    case 4:
        movimentoBispo(quantidade, valor);
        break;
    case 5:
        movimentoTorre(quantidade,'c');
        break;
    case 6:
        movimentoTorre(quantidade,'d');
        break;
    case 7:
        movimentoTorre(quantidade,'b');
        break;
    case 8:
        movimentoTorre(quantidade,'e');
        break;
    
    default:
        printErro("Você não escolheu um numero direcional correto! 1 a 4");
        return;
        break;
    }
}

int main() {
    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.
    unsigned short int numeroMovimentos;

    /* printf("Escolha a quantidade de vezes que as peças irão se mover: ");
    scanf("%hu",&numeroMovimentos); */ // Não precisa equivoco

    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.

    printf("\nMovimento do bispo:\n");

    // * Bispo: 5 casas na diagonal superior direita
    numeroMovimentos = 5; // Conforme exercicio cinco casas para direita.
    
    movimentoBispo(numeroMovimentos,1);
    
    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.
    
    printf("\nMovimento da Torre:\n");

    // * Torre: 5 casas para a direita
    numeroMovimentos = 5;
    
    movimentoTorre(numeroMovimentos,'d');
    

    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.

    printf("\nMovimento da Rainha:\n");

    // * Rainha: 8 casas para a esquerda
    numeroMovimentos = 8;
    
    movimentoRainha(numeroMovimentos,8);
    

    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.

    numeroMovimentos = 1; 

    //VERTICAL

    printf("\nMovimento do Cavalo vertical:\n");

    movimentoCavalo(numeroMovimentos,'c','d');
    
    printf("\nMovimento do Cavalo horizontal:\n");
    
    movimentoCavalo(numeroMovimentos,'d','c');

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.  

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;
}
