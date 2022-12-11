#include <stdio.h>
#include <stdlib.h>
#define TAM 10

int soma(int, int);

typedef struct estrutura{
    int x;
    int y;
    
}estrutura;

int main() {
    estrutura v[TAM];
    srand(time(NULL));
    
    for (int i=0;i< TAM; i++){
        v[i].x = rand() % 100;
        v[i].y = rand() % 100;
    }
    
    for (int i=0;i< TAM; i++){
        printf("Coord:(%d,%d) Soma: %d\n",v[i].x, v[i].y, soma(v[i].x, v[i].y));
    }

    return 0;
}

int soma(int x, int y){
    return x + y;
}
