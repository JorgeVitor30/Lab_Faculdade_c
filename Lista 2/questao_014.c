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
            if (i % 3 == 0){
                soma += 1;
            }
            
        }
        printf("%d",soma);
    }
    
    if (c > f){
        for (i = f; i < c; i++){
            if (i % 2 == 0){
                soma += 1;
            }
            
        }
        printf("%d",soma);
    }

    return 0;
} 