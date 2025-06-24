#include <stdio.h>

int main(int argc, char const *argv[])
{
    // Variaveis
    int nota1, nota2, nota3;
    float media = 0;

    // Iniciando
    printf("Programa de calcular media\n");

    // Recebendo nota1
    printf("Informe a primeira nota: ");
    scanf("%d", &nota1);
    media++;

    // Receber nota 2
    printf("Informe a segunda nota: ");
    scanf("%d", &nota2);
    media++;

    // Receber nota 3
    printf("Informe a terceira nota: ");
    scanf("%d", &nota3);
    media++;

    // Calcula a media
    media = (float)(nota1 + nota2 + nota3) / media;

    printf("A media é: %.2f\n", media);

    return 0;
}
