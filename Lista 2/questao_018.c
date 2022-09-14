#include <stdio.h>

int main(){
    long long unsigned int somatoria = 0, trigos = 1;
    for(int i = 1; i <= 64; i++){
        somatoria += trigos;
        trigos *= 2;
        printf("%llu\n", somatoria);
    };
    printf("Após preencher trigo nos 64 quadros de um tabuleiro de xadrez, teremos %llu trigos.", somatoria);
    return 0;
}