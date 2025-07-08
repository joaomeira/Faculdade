#include <stdio.h>

int main(int argc, char const *argv[])
{
    
    int index;

    char * alunos [3][3] = {
        {"01 - Joãozinho", "Português: 100", "Matemática: 100"},
        {"02 - Mariazinha", "Português: 80", "Matemática: 60"},
        {"03 - Pedrinho", "Português: 40", "Matemática: 90"}
    };

    
    printf("Imprimir pontuações dos alunos! \n\n");
    printf("Você deseja imprimir as pontuações de qual aluno? \n");
    printf("01 - Joãozinho \n");
    printf("02 - Mariazinha \n");
    printf("03 - Pedrinho \n");
    printf("R:  ");

    scanf("%d", &index);

    index--; // Decremento para que o index seja o mesmo conforme ordem digitada. Como o array se inicia em 0.

    printf("\nMuito bem !! Você escolheu o: %s \n", alunos[index][0]);
    printf("As notas dele são: \n%s\n%s\n", alunos[index][1], alunos[index][2]);

    printf("\nIsso é tudo pessoal !");

    return 0;
}
