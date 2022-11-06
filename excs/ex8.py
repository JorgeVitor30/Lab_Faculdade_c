#include <stdio.h>

int main() {
    int x ,y;
    int *p1 = &x,*p2 = &y;
    
    puts("Digite x:");
    scanf("%d",&x);
    
    puts("Digite y:");
    scanf("%d",&y);
    
    
    *p1 = *p1 ^ *p2;
    *p2 = *p2 ^ *p1;
    *p1 = *p1 ^ *p2;
    
    printf("novo valor de x:%d   novo valor de y: %d",*p1,*p2);
    
    return 0;
}
