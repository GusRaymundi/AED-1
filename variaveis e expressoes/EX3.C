#include <stdio.h>

int main(){

    int n1,n2,n3;
    int total = 0;
    
    printf("Digite 3 numeros inteiros para somalos\n");

    printf("Digite o primeiro numero inteiro: \n");
    scanf("%d", &n1);

    printf("Digite o segundo numero inteiro: \n");
    scanf("%d", &n2);
    
    printf("Digite o terceiro numero inteiro: \n");
    scanf("%d", &n3);
    
    total = n1 + n2 + n3;

    printf("Total da soma dos 3 numeros inteiros: %d", total);
}