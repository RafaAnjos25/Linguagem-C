#include<stdio.h>

int main(){
    int i=0, escolha, quantidade=0;
    char nome[20][50];
    float preco[20], soma=0;
    
    while(1){
        printf("Deseja adicionar um produto ao carrinho?\n");
        printf("Sim [1] | Nao [2]\n");
        scanf("%d", &escolha);
        fflush(stdin);
        while(escolha !=1 && escolha !=2){
            printf("Opcao Invalida.\n");
            printf("Deseja adicionar um produto ao carrinho?\n");
            printf("Sim [1] | Nao [2]");
            scanf("%d", &escolha);
        }
        if(escolha == 1){
            if(quantidade > 20){
                printf("Carrinho cheio, nao e possivel adicionar mais produtos");
                break;
            }

            printf("Qual o nome do produto? ");
            scanf("%s", nome[quantidade]);
            fflush(stdin);
            printf("Qual o preco do produto? ");
            scanf("%f", &preco[quantidade]);
            fflush(stdin);
            soma += preco[quantidade];
            quantidade++;
        }else{
            break;
        }
    }

    printf("Produtos:\n");
    for(i=0;i<quantidade;i++){
        printf(" %s\n", nome[i]);
    }
    printf("O preco total da lista de compra e %.2f:", soma);



    return 0;
}