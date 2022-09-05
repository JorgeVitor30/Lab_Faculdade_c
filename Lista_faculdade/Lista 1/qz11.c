#include <math.h>
#include <stdio.h>

int main() {
    float dolar,cot,qtd;
    printf("Qual a cotação do real-dolar?: ");
    scanf("%f",&cot);
    
    printf("Qual a qtd. de dinheiro em real a converter?: ");
    scanf("%f",&qtd); // dinheiro em real
    
    dolar = cot * qtd;
    
    printf("Real: %.2f R$ convertido para Dólar: %.2f US$",qtd,dolar);
    return 0;
}