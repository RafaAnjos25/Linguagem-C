#include <stdio.h>
#include <stdlib.h>

int main(){
    int n, i, multiplicacao;    


    printf("Digite um numero: ");
    scanf("%i", &n);

    for(i=0;i<11;i++){
        multiplicacao = i * n;
        printf("%i\n", multiplicacao);        
    }

    return 0;
}