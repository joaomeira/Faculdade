#include <stdio.h>

int main ()
{

    char produtoA[30] = "Produto A";
    char produtoB[30] = "Produto B";

    unsigned int estoqueA = 1000;
    unsigned int estoqueB = 2000;

    float valorA = 10.50;
    float valorB = 20.40;

    unsigned int estoqueMinimoA = 500;
    unsigned int estoqueMinimoB = 2500;

    double valorTotalA;
    double valorTotalB;

    int resultadoA, resultadoB;

    // Exibir informações
    printf("Informações dos produtos\n\n");
    printf("Produto:\t%s\nEstoque:\t%u\nPreço:\t\tR$%02.2f\n\n",produtoA,estoqueA,valorA);
    printf("Produto:\t%s\nEstoque:\t%u\nPreço:\t\tR$%02.2f\n\n",produtoB,estoqueB,valorB);

    // Comparações com valor minimo de estoque
    resultadoA = estoqueA > estoqueMinimoA;
    resultadoB = estoqueB > estoqueMinimoB;

    printf("O produto %s tem estoque mínimo %d\n", produtoA,resultadoA);
    printf("O produto %s tem estoque mínimo %d\n", produtoB,resultadoB);

    // Comparações entre os valores totais dos produtos
    float   i = (estoqueA * valorA),
            y = (estoqueB * valorB);

    printf("O valor total de A (R$%.2f) é maior que o valor total de B (R$%.2f): %d\n", i ,y ,i > y);


    return 0;
}