#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define TAM 5

struct livros{
    char titulo[30];
    char autor[15];
};


int main() {
    struct livros v[TAM];
    for (int i =0; i<TAM; i++){
        puts("Digite Nome do livro:");
        gets(v[i].titulo);
        puts("Digite autor do Livro:");
        gets(v[i].autor);
        
    }
    for (int i=0; i<TAM; i++){
        printf("Livro %d\n", i+1);
        printf("Titulo: %s\n",v[i].titulo);
        printf("Titulo: %s\n", v[i].autor);
        printf("\n");
    }
    
    
    
    return 0;
}
