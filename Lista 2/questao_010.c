#include <stdio.h>
#include <stdlib.h>
#include <math.h>


main() {
    int i,a;
    
    for(i = 15; i < 90; i++) {
    a = pow(i,2); 
    if (i % 4 == 0)
        printf("%d\n", a);
        
    }
}