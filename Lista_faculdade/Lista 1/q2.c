#include <stdio.h>

int main(){    
    int x;
    printf("Digite um número: ");
    scanf("%d", &x);
    
    printf("O numéro em Hexa : %x\n", x );
    printf("O número em Octal: %o", x);
    return 0;

}