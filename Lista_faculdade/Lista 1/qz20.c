#include <stdio.h>

int main (){
int x;
printf("Digite: ");
scanf("%d",&x);
switch (x % 2){
case 1:
    printf("ÍMPAR");
    break;
case 0:
    printf("PAR");
    break;
}




return 0;
}