#include <stdio.h>
#include <ctype.h>

struct UF{
    char codigo[4];
    char descricao[50];
};


int main()
{
   struct UF f1;
   
   puts("Digite o código da UF");
   fgets(f1.codigo,4,stdin);
   
   fflush(stdin);
   
   puts("Digite a descrição da UF");
   fgets(f1.descricao,50,stdin);
   
   
   puts("Dados digitados:");
   printf("código: %s\n",f1.codigo);
   printf("descricao: %s",f1.descricao);

   return 0;
}
