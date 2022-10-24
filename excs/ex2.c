#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#define TAM 100

int main() {
    srand(time(NULL));
    int vetor[TAM],aux,moda,maior;
    int vetor2[TAM], cont;
    float mediana,media,soma,conta;
    
    for (int i=0; i<101; i++){
        vetor[i] = rand() % 100;
        
    }
    
    for (int i=0; i<100; i++){
      for (int j=0; j<100; j++){
        if (vetor[j] > vetor[i]){
          aux = vetor[i];
          vetor[i] = vetor[j];
          vetor[j] = aux;
          
        }
      }
    }

    // MÉDIA
    for (int i=0; i<100; i++){
        soma += vetor[i];
    }
    printf("Média: %.2f\n",soma/100);
  
    // MEDIANA
    mediana = (vetor[50] + vetor[51]) / 2;
    printf("Mediana: %.1f", mediana);
    
    // MODA
    for (int i=0; i<TAM; i++){
        for(int j=0; j<TAM; j++){
            if (vetor[i] == vetor[j]){
                vetor2[i] = vetor2[i] +1;
            }
        }
    }

    maior = 0;
    for(int i=0; i<TAM; i++){
        if(vetor2[i] > maior){
            maior = vetor2[i];
        }
    }
    
    for(int i=0; i<TAM ; i++){
        if(vetor2[i] == maior){
            moda = i;
        }
    }
    
    printf("\nModa: %d",vetor[moda]);
    
    for (int i=0; i<100; i++){
        printf("%d\n",vetor[i]);
        
    }
    return 0;
}s