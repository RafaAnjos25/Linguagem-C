#include<stdio.h>

int main(){
    int n1, n2;
    int i = 1;

    printf("Digite um numero: ");
    scanf("%d", &n1);
    printf("Digite outro numero: ");
    scanf("%d", &n2);

    while(i < n2){
        if(i % 2 == 0){
            printf("%d", i);
        }
    }

    
    
    return 0;
}