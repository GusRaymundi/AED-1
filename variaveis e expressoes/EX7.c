#include <stdio.h>

int main(){

    float n;
    float r;

    printf("Digite um valor de temperatura em graus fahrenheit: \n");
    scanf("%f", &n);

    r = 5*(n - 32)/9;

    printf("graus fahrenheit = %.2f \n graus celsius = %.2f", n , r);
}