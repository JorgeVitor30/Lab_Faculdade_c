#include <math.h>
#include <stdio.h>


int main() {
    int c,f,i,soma;
    puts("Digite valor do começo: ");
    scanf("%d",&c);
    puts("Digite valor do começo: ");
    scanf("%d",&f);
    soma = 0;
    
    if (c < f){
        for (i = c; i < f; i++){
            if (i % 2 == 0){
                
                soma += i;
            }
            
        }
        printf("%d",soma);
    }
    
    if (c > f){
        for (i = f; i < c; i++){
            if (i % 2 == 0){
                soma += i;
            }
            
        }
        printf("%d",soma);
    }

    return 0;
}