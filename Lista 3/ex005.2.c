#include <stdio.h>
#include <string.h>
#define TAM 40

int main (){

    char str1[TAM], str2[TAM];
    puts("Digite UMA string: ");
    scanf("%s",str1);
    puts("Digite OUTRA string: ");
    scanf("%s",str2);

    strcat(str1,str2);
    puts(str1);

    return 0;
}
