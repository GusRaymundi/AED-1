#include <stdio.h>

int main(){

    float n;
    float r;

    printf("Digite um valor de temperatura em graus celsius: \n");
    scanf("%f", &n);

    r = (n*9/5)+32;

    printf("graus celsius = %.2f \n fahrenheit = %.2f", n , r);
}