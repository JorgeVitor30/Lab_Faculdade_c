#include <stdio.h>
#include <math.h>

int main() {
    float x,y,z;
    printf("Digite o valor de x: ");
    scanf("%f",&x);
    
    printf("Digite o valor de y: ");
    scanf("%f",&y);
    
    printf("Digite o valor de z: ");
    scanf("%f",&z);
    
    printf("Média aritmética: %2.f", (float) (x+y+z)/3 );
    
    return 0;
}
