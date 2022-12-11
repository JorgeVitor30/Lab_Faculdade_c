#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define TAM 10
#define MAX 100

void printaVetor(int *, int);
void preencherVetor(int *, int, int);
int maiorValor(int *, int);
typedef struct estrutura{
    int *end;
    int qtd;
    int maior;
    
}coord;


int main() {
    srand(time(NULL));
    coord q2;
    int *v = NULL;
    v = malloc(TAM * sizeof(int));
    
    q2.end = v;
    q2.qtd = TAM;
    preencherVetor(v, TAM, MAX);
    q2.maior = maiorValor(v, TAM);
    printaVetor(v, TAM);
    
    printf("\nEND: %p",q2.end);
    printf("\nQTD: %d",q2.qtd);
    printf("\nMAIOR: %d",q2.maior);
    return 0;
}

void printaVetor(int *v, int tamanho){
    for(int i=0;i<tamanho;i++){
        printf("%d ", *(v +i));
    }
}

void preencherVetor(int *v, int tama, int maximo){
    for(int i=0;i<tama;i++){
        *(v + i) = rand() % maximo;
    }
}


    
int maiorValor(int *v, int tama){
    int maior;
    for(int i=0; i<tama; i++){ 
        if (i == 0){
            maior = *(v + i);
        }
        else{
            if(*(v +i) > maior){
                maior = *(v + i);
            }
        }
        
    }
    return maior;
}
