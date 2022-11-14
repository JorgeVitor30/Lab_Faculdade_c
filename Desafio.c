#include <stdio.h>
#include <math.h>
#include <time.h>
#include <stdlib.h>
int main () {
    unsigned char x=0,y=0,libera=0;
    int menu;
    srand(time(NULL));
    do {
        puts("\n1. Ocupar armario\n2.Liberar armario\n3. Sair");
        scanf("%d", &menu);
        switch (menu)
        {
        case 1:
            y = pow(2.0,rand() % 8);
            x = x | y;
            printf("x: %hhu\ny: %hhu\n",x, y);
            if (x==255) puts("\nArmarios FULL.");
            break;
        case 2:
            puts("Digite o numero do armario entre 0 e 7.");
            scanf("%hhu", &y);
            libera = pow(2.0,(double) y);
            x = x & ~libera;
            printf("x: %hhu",x);
            break;
        case 3:
        puts("EXIT programa.");
            break;    
        default:
        puts("Valor digitado nao e valido.");
            break;
        }
    } while (menu!=3);
    
    
    return 0;
}
