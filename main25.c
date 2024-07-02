#include <stdio.h>


int calculo(int n1, int n2, char opcao);

int main(){
    int n1, n2, resultado;
    char opcao;

    printf("Digite um numero: ");
    scanf("%d", &n1);
    printf("Digite outro numero: ");
    fflush(stdin);
    scanf("%d", &n2);
    fflush(stdin);
    printf("Escolha uma opção de operação: ( |+| |-| |*| |/| )");
    scanf("%c", &opcao);
    fflush(stdin);
    while (opcao != '+' && opcao != '-' && opcao != '/' && opcao !='*'){
        printf("opcao invalida, digite novamente: ");
        fflush(stdin);
        scanf("%c", &opcao);
    }

    resultado = calculo(n1, n2, opcao);
    printf("%d\n", resultado);

    return 0;
}

int calculo(int n1, int n2, char opcao){
    int resultado;
    switch(opcao){
        case '+':
        resultado = n1 + n2;
        break;
        case '-':
        resultado = n1 - n2;
        break;
        case '/':
        if (n2 != 0){
            resultado = n1 / n2;
        }else{
            printf("Impossivel dividir por zero");
            resultado = 0;
        }
        break;
        default:
        resultado = n1 * n2;
        break;
    }
    return (resultado);
}