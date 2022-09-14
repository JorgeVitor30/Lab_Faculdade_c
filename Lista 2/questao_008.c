#include <math.h>
#include <stdio.h>

int main() {
    float valor,entrada,rest;
    puts("Digite um valor: ");
    scanf("%f",&valor);
    entrada = valor * 0.333334;
    rest = (valor - entrada) / 2;
    
    printf("O valor de entrada é:%.2f\n",entrada);
    printf("O valor das 2 parcelas são: %.1f",rest);

    return 0;
}