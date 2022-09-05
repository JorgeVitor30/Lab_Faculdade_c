#include <math.h>
#include <stdio.h>

int main() {
    float x, y ,z;
    printf("Digite o valor do Comprimento em Metros : ");
    scanf("%f",&x);
    
    printf("Digite o valor da Largura em Metros : ");
    scanf("%f",&y);
    
    printf("Digite o valor da Altura em Metros : ");
    scanf("%f",&z);
    
    printf("O volume do retângulo é : %.2f m3", (x *y *z));
    
    
    
    return 0;
}