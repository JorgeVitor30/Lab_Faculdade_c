#include "stdio.h"
#include <stdlib.h>
#include <time.h>
#define tam 10

void crescente(int *);
void decrescente(int *);



int main() {
srand(time(NULL));
int v[tam],x; 
  
for (int i=0; i<tam; i++){
  *(v + i) = rand() % 100;
}  

printf("A matriz aleatória é:\n");
for (int i=0; i<tam; i++){
printf("%d ",*(v+i));
} 

printf("\n");
puts("\nComando: ");
puts("0: Crescente\n1: Decrescente");
scanf("%d",&x);

if (x == 0){
  crescente(v);
}

if (x == 1){
 decrescente(v);
  }
  





  
return 0;


  
}

void crescente(int *v){
int aux;
puts("vetor ordenado crescente:");
for (int x = 0; x < tam; x++){
  for (int i = 0; i < tam-1; i++){
    if (*(v + i) > *(v + i + 1)){
      *(v + i) = *(v + i) ^ *(v + i + 1);
      *(v + i + 1) = *(v + i) ^ *(v + i + 1);
      *(v + i) = *(v + i) ^ *(v + i + 1);
        }
    	}
    }
  
for (int i=0; i<tam; i++){
printf("%d ",*(v+i));
}   
}

void decrescente(int *v){
puts("vetor ordenado decrescente:");
for (int x = 0; x < tam; x++){
  for (int i = 0; i < tam-1; i++){
    if (*(v + i) < *(v + i + 1)){
      *(v + i) = *(v + i) ^ *(v + i + 1);
      *(v + i + 1) = *(v + i) ^ *(v + i + 1);
      *(v + i) = *(v + i) ^ *(v + i + 1);
        }
    	}
    }
 
for (int i=0; i<tam; i++){
printf("%d ",*(v + i));
}    
}
