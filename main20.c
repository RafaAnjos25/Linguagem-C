#include <stdio.h>

int main(){
    char mat[4][4]={{'a', 'b', 'c', 'd'},
                    {'e', 'f', 'g', 'e'},
                    {'i', 'j', 'a', 'l'},
                    {'m', 'n', 'o', 'b'}};

    char letra;
    int i, j, vezes = 0;

    printf("Digite um caracter: ");
    scanf("%c", &letra);
    fflush(stdin);

    for(i=0;i<5;i++){
        for(j=0;j<5;j++){
            if(mat[i][j] == letra){
                vezes ++;
            }
        }
    }

    printf("Sua letra apareceu %d vezes\n", vezes);


    return 0;
}