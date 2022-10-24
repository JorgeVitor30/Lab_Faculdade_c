#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAM 5

int main() {
    int vetor[TAM];
    srand(time(NULL));

    for (int i = 0; i < 5; i++){
        vetor[i] = rand() % 100;
    }

    int aux;
    
    for (int i = 0; i < 5; i++){
        for (int i = 0; i < 5; i++){
            if (i == 4){
                break;}
            if (vetor[i] > vetor[i+1]){
                aux = vetor[i+1];
                vetor[i+1] = vetor[i];
                vetor[i] = aux;
                
            }
        
    }
    }
    
    for (int i=0; i < 5; i++){
        printf("%d ",vetor[i]);
    }

    return 0;
}