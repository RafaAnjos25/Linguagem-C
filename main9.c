#include<stdio.h>

int main(){
    float quantidade, notas, media;
    
    printf("Quantas notas voce vai digitar? ");
    scanf("%f", &quantidade);

    for(int i=1; i<=quantidade; i++){
        printf("Digite a nota do %d aluno: ", i);
        scanf("%f", &notas);
        media += notas;
    }

    printf("A media bimestral da turma e: %.2f\n", media/quantidade);

    return 0;
}