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
    
    printf("Média aritmética: %.2f e Média Aritmética: %.2f", (float) (x+y+z)/3 , pow(x * y * z, 1.0 / 3.0)  );
    
    
    return 0;
}
