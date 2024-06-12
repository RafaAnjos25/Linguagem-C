#include <stdio.h>

int main(){
    int mat1[3][3]={{9, 2, -5},
                    {3, 9, 1},
                    {3, 3, 9}};
    int mat2[3][3]={{9, 2, -5},
                    {3, 4, 1},
                    {2, 3, 9}};

    int i;


    for(i=0;i<3;i++){
        if(mat1[i][i] == mat1[1][1] && mat1[i][i]== mat1[2][2]){
            printf("Valores iguais\n");
        }else{
            printf("Valores diferentes\n");
        }
    }

    for(i=0;i<3;i++){
        if(mat2[i][i] == mat2[1][1] && mat2[i][i]== mat2[2][2]){
            printf("Valores iguais\n");
        }else{
            printf("Valores diferentes\n");
        }
    }

    if(mat1[0][0]==mat1[1][1] && mat1[1][1]==mat1[2][2]){
        printf("Valores iguais\n");
    }else{
        printf("Valores diferentes\n");
    }
    
     if(mat2[0][0]==mat2[1][1] && mat2[1][1]==mat2[2][2]){
        printf("Valores iguais\n");
    }else{
        printf("Valores diferentes\n");
    }




    return 0;
}