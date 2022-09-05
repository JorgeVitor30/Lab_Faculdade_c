#include <math.h>
#include <stdio.h>

int main() {
    float hora,imposto,salario;
    int tempo;
    
    printf("Digite quanto é a hora-aula?: ");
    scanf("%f",&hora);
    printf("Quantas horas você trabalhou?: ");
    scanf("%d",&tempo);
    printf("Digite o percentual do INSS: ");
    scanf("%f",&imposto);
  
    salario = (hora * tempo) - ( hora * tempo) * imposto/100;
    
    printf("O salário bruto é: %.1f RS",(hora * tempo));
    printf("O salário líquido é: %.1f RS",salario);
    
    
    return 0;
}