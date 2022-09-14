#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main() {
    int x,i;
    printf("Digite um valor de x: ");
    scanf("%d",&x);
    
    for(i = 1; i <= 10; i++)
    {
        printf("%d x %d = %d\n",i, x, i * x);
    
    }
    
    

}
