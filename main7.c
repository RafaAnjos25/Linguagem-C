#include<stdio.h>

int main(){
    int i, idade;

    printf("Digite a seu ano de nascimento: ");
    scanf("%d", &idade);

    for(i=2023; idade<=i; i--){
        printf("%d\n", i);        
    }


    return 0;
}