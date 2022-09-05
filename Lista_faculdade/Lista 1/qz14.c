#include <math.h>
#include <stdio.h>

int main() {
    float c, f;
    printf("Digite um valor em Celsius: ");
    scanf("%f",&c);
    
    f = (9*c + 160) / 5;
    
    printf("O valor em graus é: %.2f F",f);
    return 0;
}