#include <stdio.h>


struct mediaaluno{
        float nota1;
        float nota2;
        float media;
        
};
    
    
int main() {
    
    struct mediaaluno aluno;
    int media;
    
    puts("Digite a nota1: ");
    scanf("%f", &aluno.nota1);

    puts("Digite a nota2: ");
    scanf("%f", &aluno.nota2);
    
    aluno.media = (aluno.nota1 + aluno.nota2)/2;
    
    printf("Nota 1: %.1f\nNota 2: %.1f\nMedia:%.1f", aluno.nota1, aluno.nota2, aluno.media);
    
    return 0;
};