#include <stdio.h>
#include <stdlib.h>

int main(int argv, char * argc[]){
  if(argv != 4){
    puts("Execute novamente o programa passando 2 números inteiros e a operacao [1 ou 2]");
    return 0;
  }
  int x = atoi(argc[1]), y = atoi(argc[2]), op = atoi(argc[3]);
  int result = op == 1 ? x + y : x * y;
  printf("O resultado da operacao escolhida entre %d e %d e de %d \n", x, y, result);

  return 0;
}