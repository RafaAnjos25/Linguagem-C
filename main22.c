#include <stdio.h>

void linhas(int n, char c);

int main(){

    int n;
    char c;

    printf("Digite a quantidade de linhas: ");
    scanf("%d", &n);
    fflush(stdin);
    printf("Digite o tipo de caracter: ");
    scanf("%c", &c);


    linhas(n,c);




    return 0;
}

void linhas(int n, char c){
    for(int i=0; i<n; i++){
        	printf("%c%c%c%c%c%c%c%c%c%c%c\n", c,c,c,c,c,c,c,c,c,c,c);
    }


}