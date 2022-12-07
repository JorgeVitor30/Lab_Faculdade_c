#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void preencheVetor(int *, int, int);
int * verificaMenor(int *, int);

int main(int argc, char * argv[]){
  if(argc != 2){
    puts("Execute novamente o programa passando o tamanho do vetor como argumento em linha de comando");
    return 0;
  }
  srand(time(NULL));

  int tam = atoi(argv[1]);
  int v[tam];
  preencheVetor(v, tam, 100);

  int *m = verificaMenor(v, tam);
  printf("O menor valor do vetor gerado é %d e seu endereço é %p", *m, m);

  return 0;
}

void preencheVetor(int *p, int tamanho, int maxVal){
    for(int i = 0; i < tamanho; i++){
        *(p+i) = rand() % maxVal;
    }
}

int * verificaMenor(int *p, int tamanho){
  int *pMenor = NULL;
  for(int i = 0; i< tamanho; i++){
    if(i == 0){
      pMenor = (p+i);
    } else {
      if (*(p+i) < *pMenor){
        pMenor = (p+i);
      }
    }
  }
  return pMenor;
}