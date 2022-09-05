#include <stdio.h>
#include <math.h>

int main() {
    float x;
    printf("Digite quantos segundos: ");
    scanf("%f",&x);
    
    printf("Em horas: %.2f h\n", x/3600);
    printf("Em minutos: %.2f min", x/60);
    
    return 0;
}
