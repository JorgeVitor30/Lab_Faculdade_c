#include <math.h>
#include <stdio.h>

int main() {
    int h , m , s;
    printf("Digite quantas horas: ");
    scanf("%d",&h);
    
    printf("Digite quantos minutos: ");
    scanf("%d",&m);
    
    printf("Digite quantos segundos: ");
    scanf("%d",&s);


    printf("O Total do tempo em segundos: %d ",(h * 3600) + (m * 60) + s);
    return 0;
}