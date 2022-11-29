#include <stdio.h>
#define TAM 3

struct aluno{
    float nota1;
    float nota2;
    float media;
    
};

float Media(struct aluno *, int);

int main() {
    struct aluno alunos[3];
    
    for (int i=0; i< TAM; i++){
        printf("Digite a primeira nota do aluno %d: ", i +1);
        scanf("%f",&(alunos+i)-> nota1);
        
        printf("Digite a segunda nota do aluno %d: ", i + 1);
        scanf("%f",&(alunos+i) -> nota2);
    }
    
    printf("A média dos alunos é: %.2f\n",Media(alunos,TAM));
    

    return 0;
}

float Media(struct aluno *v, int tamanho){
    for (int i=0; i<tamanho; i++){
        printf("Media do aluno %d: %.2f\n",i+1, ((v + i) -> nota1 + (v+i) -> nota2) /2 );
    }
    
    
    float soma = 0;
    
    for (int i=0; i<tamanho;i++){
        soma +=((v + i) -> nota1 +(v+i) -> nota2 )/2;
    }
    return soma / tamanho;
    
}









