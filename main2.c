#include<stdio.h>

int main(){
    int n, i, escala;
    float media, soma = 0;

    printf("Em quantos pontos voce vai querer medir a temperatura?");
    scanf("%d", &n);
    float ambiente[n];

    printf("Escolha uma opçao:\n");
    printf("1-Graus Celsius\n");
    printf("2-Fahrenheit\n");
    printf("3-Kelvin\n");
    scanf("%d", &escala);

    for(i=0;i<n;i++){
        printf("Digite a %d temperatura: ", i+1);
        scanf("%f", &ambiente[i]);
        soma += ambiente[i];
    }

    media = soma / n;

    switch(escala){
        case 1:
            printf("A temperatura media do ambiente e de %.2f graus.", media);
            break;
        case 2:
            printf("A temperatura media do ambiente e de %.2f fahrenheit.", media);
            break;
        case 3:
            printf("A temperatura media do ambiente e de %.2f kelvins.", media);
            break;
        default:
            printf("Escala termometrica invalida");
            break;   
    }


    return 0;
}