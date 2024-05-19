#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_NAME_LENGTH 30

int main() {
    int n, i;
    char buffer[128];  // Buffer grande o suficiente para armazenar entradas temporárias

    printf("Digite o numero de contatos: ");
    fgets(buffer, sizeof(buffer), stdin);
    sscanf(buffer, "%d", &n);

    char nome[n][MAX_NAME_LENGTH];
    char numero[n][50];

    for(i = 0; i < n; i++) {
        printf("Digite o nome do %dº contato: ", i + 1);
        fgets(nome[i], MAX_NAME_LENGTH, stdin);
        // Remover o newline do final da string, se houver
        nome[i][strcspn(nome[i], "\n")] = '\0';

        printf("Digite o numero do %dº contato: ", i + 1);
        fgets(numero[i], 50, stdin);
        numero[i][strcspn(numero[i], "\n")] = '\0';
    }

    printf("\nCONTATOS:\n");
    for(i = 0; i < n; i++) {
        printf("Nome: %s, Numero: %d\n", nome[i], numero[i]);
    }

    return 0;
}