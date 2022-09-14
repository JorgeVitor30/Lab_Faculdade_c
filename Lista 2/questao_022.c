#include <stdio.h>

int main(){
    int x, setes = 0;
    printf("Digite um número inteiro: \n");
    scanf("%d",&x);
    while(x != 0){
        if(x % 10 == 7){
            setes += 1;
        }
        x /= 10;
    }
    printf("O número digitado possúi %d números 7.\n", setes);
    return 0;
}