#include <stdio.h>
#include <stdlib.h>

int main(){
    int n;

    printf("Digite um numero: ");
    scanf("%i", &n);

    if(n%2!=0 && n%3!=0 && n%5!=0 && n%7!=0){
        printf("Esse numero e primo\n");
    }else{
        printf("Esse numero nao e primo\n");
    }


    return 0;
}