#include <math.h>
#include <stdio.h>

int main() {
    int dias;
    float imposto,fixo;
    imposto = 0.9;  // comentário 
    fixo = 50.25;
    
    printf("Quantos dias trabalhou?: ");
    scanf("%d",&dias);
    
    if (dias < 10){
        printf("O Pagamento a ser feito será de: %.2f\n",dias * fixo * imposto);
    }
    
    else if (10 <= dias <= 20){
        printf("O Pagamento a ser feito será de: %.2f\n",dias * fixo * 1.2 * imposto);
    }
    
    else if (dias > 20){
        printf("O Pagamento a ser feito será de: %.2f",dias * fixo * 1.3 * imposto);
    }
    
    
  
    
    return 0;
}