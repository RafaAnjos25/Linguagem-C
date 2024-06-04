#include <stdio.h>

int main(){
    int i, j;
    int k = 2;
    int multiplicacao[3]={2, 2, 2};

    int mat[3][3]={{1, 2, 3},
                   {4, 5, 6},
                   {7, 8, 9}};

    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            if(mat[i][j] == mat[0][0] || mat[i][j] == mat[1][1] || mat[i][j] == mat[2][2]){
                multiplicacao[i]= mat[i][j]*k;
                printf("%d\n", multiplicacao[i]);
            }
        }
    }



    return 0;
}