#include <math.h>
#include <stdio.h>

/*Elaborar um programa que apresente os valores de convers ̃ao de graus Celsius em graus Fahrenheit,
de 10 em 10 graus, iniciando a contagem em dez graus Celsius e finalizando em cem graus Celsius. O
programa deve apresentar os valores das duas temperaturas. Obs.: Pesquise a f ́ormula de convers ̃ao. */

int main() {
    float i;
    

    for (i = 0; i < 100 ; i+=10){

    printf("Graus: %.2f Fah: %.2f\n",i,i * 1.8 + 32);
    

    }
    



    return 0;
}