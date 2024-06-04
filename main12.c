#include <stdio.h>
#include <stdlib.h>

int main(){
    int n, i, n1=1, n2=0;
    int soma;

    printf("Digite o tamanho da sequencia fibonacci: ");
    scanf("%i", &n);

    for(i=0;i<n;i++){
        if(i==0){
            printf("%i\n", 0);
            printf("%i\n", 1);
        }
        soma = n1+n2;
        printf("%i\n", soma);
        n2 = n1;
        n1 = soma;
    }




    return 0;
}