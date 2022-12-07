#include <stdio.h>
#include <stdlib.h>
#include <time.h>

struct empresa{
    char nome[30];
    float cnpj;
    char localizacao[30];
};


int main() {
    struct empresa empresa1;
    puts("Nome da empresa: ");
    scanf("%s", &empresa1.nome);
    
    puts("CNPJ da empresa: ");
    scanf("%f", &empresa1.cnpj);
    
    puts("Localização da empresa: ");
    scanf("%s", &empresa1.localizacao);
    
    printf("Nome : %s\nCNPJ: %.0f\nLocalização: %s",empresa1.nome, empresa1.cnpj, empresa1.localizacao);
    
    
    return 0;
}
