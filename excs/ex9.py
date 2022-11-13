#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define tam 10

void preencherVetor(int *v, int tam){
    for(int i = 0; i < tam; i++){
        *(v + i) = rand() % 100;
    }
}

void printaVetor(int *v, int tam){
    for(int i = 0; i < tam; i++){
        printf("%d ",*(v + i));
    }
}

int main(){
    srand(time(NULL));
    
    int v[tam];
    
    preencherVetor(v, tam);
    printaVetor(v, tam);

    return 0;
}
