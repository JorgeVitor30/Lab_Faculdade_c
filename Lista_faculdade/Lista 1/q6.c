#include <stdio.h>
#include <math.h>

int main(){    
    float res,altura;
    char sexo;
    
    printf("Digite seu sexo: [M/F]  ");
    scanf("%c",&sexo);
    if (sexo == 'M'){
        printf("Digite sua altura: ");
        scanf("%f",&altura);
        printf("O seu peso ideal é: %1.f Kg", 72.7 * altura - 58);
   
    
    }
    
   else if (sexo == 'F'){
        printf("Digite sua altura: ");
        scanf("%f",&altura);
        printf("O seu peso ideal é: %1.f", 62.1 * altura - 44.7);
    }
    
    else {
        printf("Digite dados corretos!!!! ");
    }

    
    return 0;
}