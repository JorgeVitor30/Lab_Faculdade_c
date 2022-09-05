#include <math.h>
#include <stdio.h>

int main() {
    int x;
    printf("Digite um número para seu suc. e ant.: ");
    scanf("%d",&x);
    
    printf("Seu antecessor é: %d e  o sucessor é : %d // Numero-->(%d)",(x -1) , (x +1) , x);
    
    return 0;
}