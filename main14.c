#include <stdio.h>

int main(){
    int i, j;
    int soma[3][3];

    int mat [3][3]={{1, 2, 3},
                    {4, 5, 6},
                    {7, 8, 9}};

    int mat2 [3][3]={{1, 2, 3},
                     {4, 5, 6},
                     {7, 8, 9}};

    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            soma[i][j] = mat[i][j] + mat2[i][j];
            printf("%d\n", soma[i][j]);
        }
    }


    return 0;
}