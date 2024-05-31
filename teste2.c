#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct camisa{
  char nome[50];
  char tam;
  char cor[21];
};

int main(void) {
  int alunos;

  struct camisa temporario;
  

  while(1){
    scanf("%d", &alunos);
    if(alunos == 0){
      break;
    }
    
    struct camisa *c =(struct camisa*)malloc(alunos*sizeof(struct camisa));
    getchar();
    for(int i=0;i<alunos;i++){
      scanf("%[^\n]",c[i].nome);
      c[i].nome[strcspn(c[i].nome, "\n")] = '\0';
      scanf("%s %c", c[i].cor, &c[i].tam);
      getchar();
    }

    for(int j=0;j<alunos-1;j++)
    {
      for(int k=0;k<alunos-j-1;k++){
        if(strcmp(c[k].cor,c[k+1].cor)>0){
          temporario = c[k];
          c[k] = c[k+1];
          c[k+1] = temporario;
        }
        else if(strcmp(c[k].cor, c[k+1].cor) == 0 && c[k].tam<c[k+1].tam){
          temporario = c[k];
          c[k] = c[k+1];
          c[k+1] = temporario;
        }
        else if(strcmp(c[k].cor, c[k+1].cor) == 0 && c[k].tam == c[k+1].tam && strcmp(c[k].nome,c[k+1].nome)>0){
          temporario = c[k];
          c[k] = c[k+1];
          c[k+1] = temporario;
        }
      }
    }
    for(int i=0;i<alunos;i++){
      printf("%s %c %s\n", c[i].cor, c[i].tam, c[i].nome);
    }
    free(c);
    if(alunos !=0){
      printf("\n");
    }
  }
  
  return 0;
}