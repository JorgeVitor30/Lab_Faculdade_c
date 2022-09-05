#include <stdio.h>

int main (){
int n1,n2;
printf("Digite o n1: ");
scanf("%d",&n1);

printf("Digite o n2: ");
scanf("%d",&n2);

switch (n1 % n2){
case 0:
    printf("MULTPLOS");
    break;
default:
    printf("NÃO MULTIPLOS");
        break;
        
}




return 0;
}