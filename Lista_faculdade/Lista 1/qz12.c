#include <math.h>
#include <stdio.h>

int main() {
    int x, y;
    printf("Digite o primeiro número: ");
    scanf("%d",&x);
    printf("Digite o primeiro número: ");
    scanf("%d",&y);
    
    printf("A soma: %d\n",(x + y));
    printf("O produto: %d\n", (x * y));
    printf("A diferença: %d\n", (x - y));
    printf("O quociente: %d\n", (x / y));
    printf("O resto da divisão: %d", (x % y));
    
    
    
    
    return 0;
}