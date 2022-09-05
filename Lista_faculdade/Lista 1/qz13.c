#include <stdio.h>

int main() {
    int a , b ,aux;
    printf("Digite um número pro A: ");
    scanf("%d",&a);
    
    printf("Digite um número pro B: ");
    scanf("%d",&b);
    
    aux = a;
    a = b;
    b = aux;
    
    printf("Valor de A: %d  , Valor de B: %d",a,b);
    
    return 0;
}