#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define TAM 100

typedef struct lista{
    int x;
    struct lista *prox;
}lista;

void verificaProxElemento(lista *);

int main(){
    srand(time(NULL));    
    lista a,b,c,d;
    
    a.x = rand() % TAM;
    b.x = rand() % TAM;
    c.x = rand() % TAM;
    d.x = rand() % TAM;
    
    a.prox = &b;
    b.prox = &c;
    c.prox = &d;
    d.prox = NULL;
    

    verificaProxElemento(&a);
    return 0;

}

void verificaProxElemento(lista *v){
    for(lista *k=v; k!= NULL; k = k->prox){
        printf("%d ",k->x);
    }
}
