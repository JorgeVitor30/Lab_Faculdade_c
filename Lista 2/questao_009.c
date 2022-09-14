#include <stdio.h>
#include <stdlib.h>
#include <math.h>


main() {
    int a, b, auxiliar, i, n;

    a = 0;
    b = 1;
    
    printf("\nSérie de Fibonacci:\n\n");
    printf("%d\n", b);
    
    for(i = 0; i < 19; i++) {

        auxiliar = a + b;
        a = b;
        b = auxiliar;

        printf("%d\n", auxiliar);
    }
}