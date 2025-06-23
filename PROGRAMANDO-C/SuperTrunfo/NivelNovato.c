#include <stdio.h>

/*
? Criar um programa em C que permita ao usuário inserir os dados de duas cartas do Super Trunfo. Para cada carta, o usuário deverá fornecer as seguintes informações:


Estado: Uma letra de 'A' a 'H' (representando um dos oito estados). Tipo: char
Código da Carta: A letra do estado seguida de um número de 01 a 04 (ex: A01, B03). Tipo: char[] (um array de caracteres, ou string)
Nome da Cidade: O nome da cidade. Tipo: char[] (string)
População: O número de habitantes da cidade. Tipo: int
Área (em km²): A área da cidade em quilômetros quadrados. Tipo: float
PIB: O Produto Interno Bruto da cidade. Tipo: float
Número de Pontos Turísticos: A quantidade de pontos turísticos na cidade. Tipo: int

Após o usuário inserir os dados de cada carta, seu programa deve exibir na tela as informações cadastradas, de forma organizada e legível. Para cada carta, imprima cada informação em uma linha separada, com uma descrição clara. Por exemplo:
 
* Carta 1:

Estado: A
Código: A01
Nome da Cidade: São Paulo
População: 12325000
Área: 1521.11 km²
PIB: 699.28 bilhões de reais
Número de Pontos Turísticos: 50

* Carta 2:

Estado: B
Código: B02
Nome da Cidade: Rio de Janeiro
População: 6748000
Área: 1200.25 km²
PIB: 300.50 bilhões de reais
Número de Pontos Turísticos: 30    

Requisitos funcionais

O programa deve ler corretamente os dados de duas cartas do usuário via entrada padrão (teclado).
O programa deve armazenar os dados lidos em variáveis apropriadas.
O programa deve exibir os dados de cada carta na tela, formatados de forma clara e organizada, conforme o exemplo acima.

Requisitos não funcionais

Usabilidade: O programa deve ser fácil de usar, com instruções claras para o usuário.
Legibilidade: O código deve ser bem indentado, com comentários explicativos e nomes de variáveis significativos, facilitando a leitura e compreensão.
Corretude: O programa deve funcionar corretamente, sem erros de compilação ou execução.

Simplificações para o desafio

Você só precisa implementar o cadastro e a exibição de duas cartas.
Neste nível, foque apenas na leitura, armazenamento e exibição das informações. Você não precisa implementar nenhuma lógica de comparação entre as cartas ou qualquer outro recurso adicional.
Não utilize estruturas de repetição (como for ou while) ou estruturas de decisão (como if ou else). Seu código deve ser uma sequência simples de instruções.
*/

int main()
{
    /* Declarando variaveis */

    // Chars
    char    estado,                     // Estado
            codigoCarta[4],             // Codigo da Carta
            nomeCidade[20];             // Nome da cidade

    // Ints
    int     numeroHabitantes,           // Numedo de habitantes
            numeroPontosTuristicos;     // Numero de pontos turisticos

    // Floats
    float   area,                       // Area da cidade
            pib;                        // Pib da cidade

    
    /* Entrada de dados */

    // Entrada do estado LETRA
    printf("Informe o estado, apenas com letras de A até H (Utilizar Somente maiúculo!): \n");

    while (1) // Loop para aceitar apenas letras de A até H
    {
        // Solicita entrada do usuario
        scanf(" %c", &estado); // Espaço antes do %c para não pegar buffer do enter, se não sai 2 mensagens.

        if (estado >= 'A' && estado <= 'H') // Verifica se está entre A e H para seguir a proxima etapa
        {
            break; // Se estiver dentro do RANGE. Break! Sai do "loop"
        }

        printf("Erro! Você não digitou letras entre A até H em maiusculo! Tente novamente:\n"); // Caso chegue até aqui é porque não atendeu as condições do if, ou seja está fora do range. Mostra mensagem para usuario tentar novamente.
    }

    // Entrada do codigo da carta
    printf("Informe o codigo da carta, lembre-se inicia com a letra do estado em MAIÚSCULO seguido de 2 numeros de 01 até 04:\n");

    while (1) // Loop para aceitar apenas a combinação conforme pede no exercicio LETRA+2 numeros.
    {
        // Solicita entrada do usuario
        scanf(" %s", codigoCarta); // Espaço antes do %s para não pegar buffer do enter, se não sai 2 mensagens.

        if (codigoCarta[0] == estado &&                     // Verifica se é a mesma letra do estado
            codigoCarta[1] == '0' &&                        // Verifica se escreveu o 0 
            codigoCarta[2] > '0' && codigoCarta[2] <= '4')  // Verifica se o terceiro caractere é um numero entre 1 e 4
        {
            break; // Se estiver dentro do RANGE. Break! Sai do "loop"
        }

        printf("Erro! Você não digitou CORRETAMENTE!\n"); // Caso chegue até aqui é porque não atendeu as condições do if, ou seja está fora do range. Mostra mensagem para usuario tentar novamente.
        printf("Lembre-se inicia com a letra do estado em MAIÚSCULO seguido de 2 números de 01 até 04.\n");
        printf("Tente novamente: ");
    }

    // Entrada nome da cidade (Sem tratamento de erros)
    printf("Nome da cidade sem ESPAÇOS: ");
    scanf(" %s", nomeCidade);

    // Entrada numero da população (Sem tratamento de erros)
    printf("Número da população sem VIRGULAS!: ");
    scanf("%d", &numeroHabitantes);

    // Entrada area da cidade em m2 (Sem tratamento de erros)
    printf("Numero da área em m² da cidade: ");
    scanf("%f", &area);

    // Entrada PIB da cidade
    printf("Numero do PIB da cidade: ");
    scanf("%f", &pib);

    // Entrada do número de pontos turisticos da cidade
    printf("Número de pontos turisticos da cidade: ");
    scanf("%d", &numeroPontosTuristicos);

    // Imprimindo resultados conforme pedido
    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado);
    printf("Código: %s\n", codigoCarta);
    printf("Nome da cidade: %s\n", nomeCidade);
    printf("População: %d\n", numeroHabitantes);
    printf("Área: %.2f km²\n", area);
    printf("PIB: %.2f bilhões de reais\n", pib);
    printf("Número de pontos turisticos: %d\n", numeroPontosTuristicos);
    
    return 0;
}
