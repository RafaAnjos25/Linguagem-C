#include<stdio.h>

int main(){
    int i, n1, n2;

    printf("Digite dois numeros: ");
    scanf("%d", &n1);
    scanf("%d", &n2);

    for(i=n1+1; i<n2; i++){
        printf("%d\n", i);
    }


    return 0;

}