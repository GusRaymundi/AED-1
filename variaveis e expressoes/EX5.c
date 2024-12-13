#include <stdio.h>

int main(){

    float n;
    float total = 0;

    printf("Digite um numero real para descobrir a quinta parte deste numero: \n");
    scanf("%f", &n);

    total = n / 5;

    printf("A quinta parte do numero %.2f e: %.2f", n, total);
}