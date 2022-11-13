#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define TAM 10

void preencherVetor(int *, int, int);
void printaVetor(int *, int);

int main(){
    srand(time(NULL));

    int *v;
    v = malloc(TAM * sizeof(int));
    
    preencherVetor(v, 0, TAM);
    printaVetor(v, TAM);
    
    int qtd;
    puts("Digite o novo tamanho: ");
    scanf("%d",&qtd);
    if (qtd < TAM){
        puts("Tamanho inválido");
        exit(1);
    }
    
    v = realloc(v, abs(TAM - qtd));
    preencherVetor(v, TAM, qtd );
    printaVetor(v, TAM + (qtd - TAM));
    
    printf("%d",TAM + qtd);
    

    return 0;
}


void preencherVetor
(int *v, int inicio , int fim){
    for(int i = 0; i < fim; i++){
        *(v + i) = rand() % 100;
    }
}

void printaVetor(int *v, int tamanho){
    for(int i = 0; i < tamanho; i++){
        printf("%d -> %p\n",*(v + i), v + i);
    }
}

