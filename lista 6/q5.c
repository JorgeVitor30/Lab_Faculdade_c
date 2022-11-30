#include <stdio.h>
#include <string.h>

struct professor {
  char nome[10];
};
struct disciplina{
  char nome[25];
  struct professor * professorDaDisciplina;
};

int main(){
  struct professor daniel;
  struct disciplina labProg;

  strcpy(daniel.nome, "Daniel");
  
  strcpy(labProg.nome, "Laboratorio de Programacao");
  labProg.professorDaDisciplina = &daniel;
  
  printf("O professor da disciplina %s é o %s. \n", labProg.nome,labProg.professorDaDisciplina->nome);

  return 0;
}
