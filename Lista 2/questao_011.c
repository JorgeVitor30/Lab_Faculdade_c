#include <math.h>
#include <stdio.h>

/*Refa ̧ca a quest ̃ao 11, considerando que os limites da faixa (A e B) sejam fornecidos pelo usu ́ario. O
programa deve funcionar tanto para A > B quanto para B > A.ao. */

int main() {
    int c,f,i,soma;
    puts("Digite valor do começo: ");
    scanf("%d",&c);
    puts("Digite valor do começo: ");
    scanf("%d",&f);
    
    if (c < f){
        for (i = c; i < f; i++){
            if (i % 2 == 0){
                soma += i;
                printf("%d",i);
            }
            
        }
        
    }
    
    if (c > f){
        for (i = f; i < c; i++){
            if (i % 2 == 0){
                soma += i;
                printf("%d",i);
            }
            
        }
        
    }

    return 0;
}