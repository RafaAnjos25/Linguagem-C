#include <stdio.h>

int main(){
    int i, j;
    int subtracao[5][5];

    int mat[5][5]={{1, 2, 3, 4, 5},
                    {4, 5, 6, 7, 8},
                    {9, 10, 11, 12, 13},
                    {14, 15, 16, 17, 18},
                    {19, 20, 21, 22, 23}};

    int mat2[5][5]={{1, 2, 3, 4, 5},
                    {4, 5, 6, 7, 8},
                    {9, 10, 11, 12, 13},
                    {14, 15, 16, 17, 18},
                    {19, 20, 21, 22, 23}};

    for(i=0;i<5;i++){
        for(j=0;j<5;j++){
            subtracao[i][j]= mat[i][j] - mat2[i][j];
            printf("%d\n", subtracao[i][j]);
        }
    }




    return 0;
}