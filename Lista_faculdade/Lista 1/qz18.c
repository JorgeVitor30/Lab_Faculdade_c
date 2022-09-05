#include <math.h>
#include <stdio.h>
#include <stdlib.h>

int main() {
    float pi, raio;
    pi = 3.14159;
    printf("Digite o tamanho do raio(cm): ");
    scanf("%f",&raio);
    
    printf("O seu Diâmetro: %.1fcm\n",2 * raio );
    printf("A sua Circunferência: %.1fcm\n",2 * pi * raio );
    printf("A sua Área: %.1f cm",pi * pow(raio,2) );
    
    
    
    return 0;
}