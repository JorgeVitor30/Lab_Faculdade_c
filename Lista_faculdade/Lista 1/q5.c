#include <stdio.h>
#include <math.h>

int main(){    
    float x;
    printf("Digite o valor da conta: ");
    scanf("%f", &x);
    printf("A conta total com a taxa cobrada: %.1f Reais", x * 1.1);
    
    return 0;

}