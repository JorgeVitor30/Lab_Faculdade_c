#include <stdio.h>
#include <math.h>

int main(){    
    int x;
    printf("Digite um número para as operações: ");
    scanf("%d", &x);
    
    printf("O número triplicado: %d \n", x * 3);
    printf("O número elevado a 2: %d \n", x * x);
    printf("O número divido por 2: %.1f ", (float) x / 2);

    return 0;

}