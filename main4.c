#include<stdio.h>

int main(int argc, char const *argv[]){
    int quantidade;
    int i = 1;
    float nota, media;

    printf("Digite o numero de notas: ");
    scanf("%d", &quantidade);

    while(quantidade >= i){
        printf("Digite a nota do %dº aluno: ", i);
        scanf("%f", &nota);
        media += nota;
        i++;
    }

    printf("A media bimestral da turma é: %.2f\n", media/quantidade);




    return 0;
}