#include<stdio.h>

int main(){
    int n, i;
    char buffer[128];

    printf("Digite o numero de contatos: ");
    fgets(buffer, sizeof(buffer), stdin);
    sscanf(buffer, "%d", &n);
    

    char nome[n][100];
    int numero[n];

    for(i=0;i<n;i++){
        printf("Digite o nome do %i contato: ", i+1);
        fgets(nome[i], 50, stdin);
        nome[i][strcspn(nome[i], "\n")] = '\0';
        printf("Digite o numero do %i contato: ", i+1);
        fgets(buffer, sizeof(buffer), stdin);
        sscanf(buffer, "%d", &numero[i]);
    }

    printf("CONTATOS:\n");
    for(i=0;i<n;i++){
        printf("%s, ", nome[i]);
        printf("%i\n", numero[i]);
    }


    return 0;
}