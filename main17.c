#include <stdio.h>

int main(){
    int i, n, escolha;
    char resposta;

    printf("Quantos clientes voce quer digitar? ");
    scanf("%d", &n);
    int codigo[n];
    char nome[n];
    int idade[n];

    for(i=0;i<3;i++){
        printf("Digite o codigo do %d cliente", i+1);
        scanf("%d", &codigo[i]);
        printf("Digite o nome do %d cliente", i+1);
        scan("%s", nome[i]);
        printf("Digite a idade do %d cliente", i+1);
        scanf("%d", &idade[i]);
    }

    printf("Escolha uma opcao\n");
    printf("Alterar codigo = 1\n");
    printf("Alterar usuario = 2\n");
    printf("Alterar idade = 3\n");
    printf("Consultar dados = 4\n");
    printf("Sair = 5");
    scanf("%d", &escolha);

    switch(escolha){
        case 1:
        for(i=0;i<3;i++){
            printf("Deseja alterar o codigo do %d cliente? (S/N)", i+1);
            scanf("%c", &resposta);
            if(resposta == 'S' || resposta == 'N'){
                printf("Digite o codigo do %d cliente", i+1);
                scanf("%d", &codigo[i]);
            }
        }
        break;
        case 2:
            for(i=0;i<3;i++){
                printf("Deseja alterar o nome do %d cliente? (S/N)", i+1);
                scanf("%c", &resposta);
                if(resposta == 'S' || resposta == 'N'){
                    printf("Digite o nome do %d cliente", i+1);
                    scanf("%s", &nome[i]);
                }
            }
            break;
        case 3:
            for(i=0;i<3;i++){
                printf("Deseja alterar a idade do %d cliente? (S/N)", i+1);
                scanf("%c", &resposta);
                if(resposta == 'S' || resposta == 'N'){
                    printf("Digite a idade do %d cliente", i+1);
                    scanf("%s", &idade[i]);
                }
            }
            break;
        case 4:
            for(i=0;i<3;i++){
                printf("codigo: %d\n", codigo[i]);
                printf("nome: %s\n", nome[i]);
                printf("idade: %d\n", idade[i]);
                }
                break;
        case 5:
            printf("Saindo...");
            break;
        default:
            printf("Opcao Invalidada");
            }
    



    return 0;
}