#include <stdio.h>

int main(){

    float n;
    float total = 0;

    printf("Digite um numero real para descobrir o quadrado desse numero: \n");
    scanf("%f", &n);

    total = n * n;

    printf("O quadrado do numero %.2f e: %.2f", n, total);
}