// Online C compiler to run C program online
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define TAM 5

void preencherVetor(int *, int);
void printarVetor(int *, int);

struct media{
    int *v;
    float media;
    float qtd;
    
};


int main() {
    srand(time(NULL));
    struct media calculo;
    int v[TAM];
    calculo.qtd = TAM;
    calculo.v = v;
    float media, soma = 0;
    
    preencherVetor(v, TAM);
    printarVetor(v, TAM);
    
    for (int i=0; i < TAM; i++){
        soma += *(v + i);
    }
    
    media = soma/TAM;
    
    printf("\nA media é: %.2f", media);
    
        

    return 0;
}

void preencherVetor(int *v , int tamanho){
    for (int i=0; i<TAM; i++){
        * (v + i) = rand() % 100;
    }
}

void printarVetor(int *v, int tamanho){
    for (int i=0; i<TAM; i++){
        printf("%d ", *(v + i));
    }
}



