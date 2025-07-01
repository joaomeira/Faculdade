#include <stdio.h>

int main(int argc, char const *argv[])
{
    int i, numero;

    printf("Digite um numero para tabuada: ");
    scanf("%d",&numero);

    printf("Tabuada de %d:\n\n", numero);
    for (i = 1; i <= 10; i++)
    {
        printf("%d x %d = %d\n", numero, i, numero * i);
    }
    
    return 0;
}
