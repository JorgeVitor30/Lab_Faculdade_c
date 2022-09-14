#include <stdio.h>

int main(){
    int binaryNum[32], num, indice;
    for(int i = 1; i <= 256; i++){
        printf("%d - binário: ", i);
        indice = 0;
        num = i;
        for(num; num > 0;){
            binaryNum[indice++] = num % 2;
            num /= 2;
        }
        for(int j = indice-1; j >= 0; j--){
            printf("%d", binaryNum[j]);
        }
        printf(" octal: %o hexadecimal: %x", i, i);
        printf("\n");
    }
    return 0;
}