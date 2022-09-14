#include<stdio.h>
#include<stdlib.h>
#include<string.h>
main()

{
 int num,maior=num;
 printf("\n Número inteiro: ");
 scanf("%d",&num);

 while(num!=0){
 if(num>maior)
 maior=num;

 printf("\n Outro número(exit- 0): ");
 scanf("%d",&num);

 }
 printf("\n O MAIOR NUMERO E: %d",maior);

 printf("\n\n");
 return 0;
 }