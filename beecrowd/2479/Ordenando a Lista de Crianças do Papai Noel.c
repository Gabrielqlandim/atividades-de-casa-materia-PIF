#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct criancas{
  char nome[21];
  char caracter;
  struct criancas *prox;
}criancas;

void inserir(criancas **head, char *nome, char caracter){
    criancas *novo = (criancas*)malloc(sizeof(criancas));
    if (novo != NULL) {
        strcpy(novo->nome, nome);
        novo->caracter = caracter;
        novo->prox = NULL;

        if(*head == NULL || strcmp((*head)->nome, nome) > 0){
            novo->prox = *head;
            *head = novo;
        }else{
            criancas *temp = *head;
            while(temp->prox != NULL && strcmp(temp->prox->nome, nome) < 0){
                temp = temp->prox;
            }
            novo->prox = temp->prox;
            temp->prox = novo;
        }
    }
}


int contagemN(criancas *head){
  int contN=0;
  while(head!=NULL){
    if(head->caracter == '-'){
      contN++;
    }
    head = head->prox;
  }
  return contN;
}

int contagemP(criancas *head){
  int contP = 0;
  while(head!=NULL){
    if(head->caracter == '+'){
      contP++;
    }
    head = head->prox;
  }
  return contP;
}

void imprimir(criancas *head){
  criancas *temp = head;
  while(temp!=NULL){
    printf("%s\n", temp->nome);
    temp = temp->prox;
  }
  printf("Se comportaram: %d | Nao se comportaram: %d\n", contagemP(head), contagemN(head));
}


int main(void) {
  criancas *head =NULL;
  int n;
  char nome[21];
  char caracter;
  scanf("%d", &n);
  for(int i=0;i<n;i++){
    scanf(" %c %s", &caracter, nome);
    inserir(&head, nome, caracter);
  }
  imprimir(head);
  return 0;
}