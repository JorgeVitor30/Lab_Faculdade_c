#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void preencheVetor(int *, int, int);
void verificaMenor(int *, int, int **);
void verificaMaior(int *, int, int **);

int main(int argc, char * argv[]){
  if(argc != 2){
    puts("Execute novamente o programa passando o tamanho do vetor como argumento em linha de comando");
    return 0;
  }
  srand(time(NULL));

  int * limits[2];

  int tam = atoi(argv[1]);
  int v[tam];
  preencheVetor(v, tam, 100);

  verificaMaior(v, tam, limits);
  verificaMenor(v, tam, limits);

  printf("O menor valor do vetor gerado eh %d e seu endereco eh %p \n", *(*limits), *limits);
  printf("O maior valor do vetor gerado eh %d e seu endereco eh %p \n", *(*(limits+1)), *(limits+1));

  return 0;
}

void preencheVetor(int *p, int tamanho, int maxVal){
    for(int i = 0; i < tamanho; i++){
        *(p+i) = rand() % maxVal;
    }
}

void verificaMenor(int *p, int tamanho, int **lm){
  for(int i = 0; i < tamanho; i++){
    if(i == 0){
      *lm = (p+i);
    } else {
      if (*(p+i) < *(*lm)){
        *lm = (p+i);
      }
    }
  }
}

void verificaMaior(int *p, int tamanho, int **lm){
  for(int i = 0; i < tamanho; i++){
    if(i == 0){
      *(lm+1) = (p+i);
    } else {
      if (*(p+i) > *(*(lm+1))){
        *(lm+1) = (p+i);
      }
    }
  }
}