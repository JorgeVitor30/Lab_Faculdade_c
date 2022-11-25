// Online C compiler to run C program online
#include <stdio.h>

struct estoque {
    char nomePeca[50];
    int id;
    float preco;
    int numPedido;
    
    
};


int main() {
    struct estoque peca1;
    
    puts("Digite o nome da peça");
    fgets(peca1.nomePeca, 50, stdin);
    
    puts("Digite o id da peça");
    scanf("%d", &peca1.id);
    
    puts("Digite o preço da peça");
    scanf("%f", &peca1.preco);
    
    puts("Digite o número do pedido da peça");
    scanf("%d", &peca1.numPedido);
    
    printf("Nome do PRODUTO: %s\nID: %d\nPreço: %.1f\nN. Pedido: %d", peca1.nomePeca, peca1.id, peca1.preco, peca1.numPedido);
    


    return 0;
}
