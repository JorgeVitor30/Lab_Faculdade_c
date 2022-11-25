#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#define TAM 5
    
struct calc{
    int *p;
    int qtd;
    int media;
    
    
};
void preencherVetor(int *, int );

void preencherVetor(int *v, int tam){
    for (int i=0; i<tam; i++){
        *(v + i) = rand() % 100;
    }   
};


int main() {
    int v[TAM];
    float media, sum;
    srand(time(NULL));
    
    struct calc calculo;
    calculo.p = v;
    calculo.qtd = TAM;
    preencherVetor(v, TAM); 
    sum = 0;
    
    for (int i=0; i<TAM; i++){
        sum += *(v + i);
    }   
    
    media = sum/TAM;
    
    puts("Matriz: ");
    for (int i=0; i<TAM; i++){
        printf("%d ", *(v + i));
    }  
    printf("\n\nTamanho %d\nMédia: %.2f",TAM, media);
    
 
    
    
    
    

    return 0;
}
