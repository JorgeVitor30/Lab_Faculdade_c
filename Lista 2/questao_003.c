#include <stdio.h>
#include <math.h>

int main() {
    int x,i,f;
    printf("Digite o valor de x: ");
    scanf("%d",&x);
    
    if (x >=1)
    {
    f = 1;
    for (i=x; i >= 2; i--)
    {
        f *= i;
        
    }      
        
        
    }
    
    printf("Valor fatorial: %d",f);
    
    
    return 0;
}