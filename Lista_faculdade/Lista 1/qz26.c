#include <stdio.h>
#include <math.h>

int main() {
    float x0, x1, y0, y1 , calculo; 
    printf("Digite o valor de x0 em m: ");
    scanf("%f",&x0);
    printf("Digite o valor de x1 em m: ");
    scanf("%f",&x1);
    
    printf("Digite o valor de y0 em m: ");
    scanf("%f",&y0);
    printf("Digite o valor de y1 em m: ");
    scanf("%f",&y1);
    
    
    calculo = pow(x1 - x0, 2) + pow(y1 - y0, 2);
    
    printf("a distância é %.2f metros",  sqrt(calculo) );
    
    
    return 0;
}
