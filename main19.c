#include <stdio.h>

int main(){
    int mat1[3][3]={{1, 2, 3},
                    {3, 4, 5},
                    {6, 8, 9}};

    int mat2[3][3]={{1, 2, 3},
                    {4, 5, 6},
                    {2, 3, 7}};

    int i, j;

    for(i=2;i<3;i++){
        for(j=0;j<2;j++){
            if(mat1[i][j] > 5){
                printf("Numero maior que cinco\n");
            }else{
                printf("%d\n", mat1[i][j]);
            }
        }
    }

    for(i=2;i<3;i++){
        for(j=0;j<3;j++){
            if(mat2[i][j] > 5){
                printf("Numero maior que cinco\n");
            }else{
                printf("%d\n", mat2[i][j]);
            }
        }
    }

    return 0;
}