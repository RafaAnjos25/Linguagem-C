#include<stdio.h>

int main(){
    int n, i;
    float media, soma = 0;

    printf("Em quantos pontos voce vai querer medir a temperatura?");
    scanf("%d", &n);
    float ambiente[n];

    for(i=0;i<n;i++){
        printf("Digite a %d temperatura em graus: ", i+1);
        scanf("%f", &ambiente[i]);
        soma += ambiente[i];
    }

    media = soma / n;

    printf("A temperatura media do ambiente e de %.2f graus.", media);

    return 0;
}