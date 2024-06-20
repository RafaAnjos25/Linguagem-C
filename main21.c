#include <stdio.h>

void parOuImpar(int n);

int main(){
    int n;


    printf("Digite um numero:");
    scanf("%d", &n);

    parOuImpar(n);




    return 0;
}

void parOuImpar(int n){
    if(n%2==0){
        printf("%i", 1);
    }else{
        printf("%i", 2);
    }
}