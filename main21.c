#include<stdio.h>

int parOuImpar (int n);

int main(){
    int n;
    printf("Digite um numero: ");
    scanf("%i", &n);
    parOuImpar(n);


    return 0;
}

int parOuImpar(int n){
    if (n%2 == 0){
        printf("%i", 0);
    }else{
        printf("%i", 1);
    }
}