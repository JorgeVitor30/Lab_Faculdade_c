#include <stdio.h>
#include <math.h>
 
 /* Elaborar um programa que apresente a m ́edia aritm ́etica dos n ́umeros inteiros existentes entre uma
faixa especificada pelo usu ́ario.6. */
 
int main() {
    int contador,a,b,sum,qtd;
    printf("Digite um a: ");
    scanf("%d",&a);
    printf("Digite um b: ");
    scanf("%d",&b);
    
    
    for(contador = a; contador <= b; contador++){
        printf("%d\n",contador);
        sum += contador;
        printf("%d",sum/qtd);
    
    }
    return 0;
}S