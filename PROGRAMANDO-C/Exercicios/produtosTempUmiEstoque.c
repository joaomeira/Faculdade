#include <stdio.h>

int main(int argc, char const *argv[])
{
    float temperatura, umidade;
    unsigned int estoque, estoqueMinimo = 1000;

    // Entrada de dados.

    printf("Entre com a temperatura: ");
    scanf("%f",&temperatura);

    printf("Entre com a umidade: ");
    scanf("%f",&umidade);

    printf("Entre com o estoque: ");
    scanf("%u",&estoque);

    // Verifica se temperatura está maior que 30

    if ( temperatura > 30)
    {
        printf("Temperatura está alta!\n");
    }
    else
    {
        printf("Temperatura está dentro dos parametros.\n");
    }

    // Verifica se umidade está maior que 50

    if ( umidade > 50 )
    {
        printf("Umidade elevada!\n");
    }
    else
    {
        printf("A umidade está dentor dos parametros.\n");
    }

    // Verifica se estoque está menor que estoque minimo

    if ( estoque < estoqueMinimo)
    {
        printf("Estoque abaixo do minimo!\n");
    }
    else
    {
        printf("Estoque normal!\n");
    }

    return 0;
}
