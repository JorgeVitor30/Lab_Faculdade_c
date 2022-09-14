#include <stdio.h>
#include <math.h>

int main() {
    int x,i,f;
    x = 10;
    
    if (x >=1)
    {
    f = 1;
    for (i=x; i >= 2; i--)
    {
        if (i % 2 == 1)
            f *= i;
        
    }      
        
        
    }
    
    printf("Valor fatorial: %d",f);
    
    
    return 0;
}