#include <math.h>
#include <stdio.h>

/*Escreva um programa que apresente o somat ́orio de todos os n ́umeros divis ́ıveis por 3 pertencentes ao
intervalo [0,100] e o somat ́orio de todos os n ́umeros divis ́ıveis por 5 pertencentes ao intervalo ]100,200].
Obs.: Utilize apenas um la ̧co de repeti ̧c ̃ao.A. */

int main() {
    int i,soma3,soma5;

    for(i = 0; i < 100 ; i++){
        if (i % 3 == 0){
            soma3 += i;
        }
            
    
        
    }
    
    for(i = 0; i < 100 ; i++){
        if (i % 5 == 0){
            soma5 += i;
        }
            
    
        
    }

    printf("Soma dos mult. de 3: %d\n",soma3);
    printf("Soma dos mult. de 5: %d",soma5);

    return 0;
}