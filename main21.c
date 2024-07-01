<<<<<<< HEAD
#include<stdio.h>

int parOuImpar (int n);

int main(){
    int n;
    printf("Digite um numero: ");
    scanf("%i", &n);
    parOuImpar(n);

=======
#include <stdio.h>

void parOuImpar(int n);

int main(){
    int n;

    printf("Digite um numero:");
    scanf("%d", &n);

    parOuImpar(n);
>>>>>>> 5f968c4acdd96744dfce99918da57bb7b4fab893

    return 0;
}

<<<<<<< HEAD
int parOuImpar(int n){
    if (n%2 == 0){
        printf("%i", 0);
    }else{
        printf("%i", 1);
=======
void parOuImpar(int n){
    if(n%2==0){
        printf("%i", 1);
    }else{
        printf("%i", 2);
>>>>>>> 5f968c4acdd96744dfce99918da57bb7b4fab893
    }
}