#include <stdio.h>
#define TAM 3
# include <stdlib.h>
#include <time.h>

int main(){
   int matriz[TAM][TAM];
   int maior, *p;
   srand(time(NULL));

    for (int i=0;i<TAM;i++){
        for (int j=0;j<TAM;j++){
            matriz[i][j] = rand() % 100;
        }
    }
    
    for (int i=0;i<TAM;i++){
        for (int j=0;j<TAM;j++){
            printf("%d  ",matriz[i][j]);
        }
    }
    
    int aux;
    puts("\n");
    p = &matriz[0][0];
    
    for (int i=0;i<TAM*TAM;i++){
        if (i==0){
            maior = *p;
        }
        else{
            if (maior < *(p+i)){
                maior = *(p+i);
            }
        }
        
        
    }
    
    printf("Maior: %d",maior);
    
    return 0;
}s