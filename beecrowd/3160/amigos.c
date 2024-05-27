#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct amigos{
    char nomes[50];
    struct amigos *prox;
}amigos;

void inserir(amigos **head, char *nome, char *antes) {
    amigos *novo = (amigos*)malloc(sizeof(amigos));
    amigos *temp = *head;
  
    strcpy(novo->nomes, nome);
    novo->prox = NULL;

     if(*head == NULL || (antes != NULL && strcmp((*head)->nomes, antes)==0)) {
        novo->prox = *head;
        *head = novo;
    }else{
        
        while(temp->prox != NULL && (antes == NULL || strcmp(temp->prox,antes)!=0)){
            temp = temp->prox;
        }
        novo->prox = temp->prox;
        temp->prox = novo;
    }
}

void imprimir(amigos *head){
    while(head !=NULL){
        printf("%s ", head->nomes);
        head = head->prox;
    }
    printf("\n");
}

int main(void){
    amigos *head = NULL;

    char lista[500];
    char nova[500];
    char indic[100];

    fgets(lista, 500, stdin);
    lista[strcspn(lista, "\n")] = 0;
    fgets(nova, 500, stdin);
    nova[strcspn(nova, "\n")] = 0;
    fgets(indic, 100, stdin);
    indic[strcspn(indic, "\n")] = 0;

    char* nome = strtok(lista, " ");
    while (nome != NULL) {
        inserir(&head, nome, NULL);
        nome = strtok(NULL, " ");
    }

    nome = strtok(nova, " ");
    while (nome != NULL) {
        if(strcmp(indic,"nao")==0){
            inserir(&head, nome, NULL);
        }
        else{
            inserir(&head, nome, indic);
        }
        nome = strtok(NULL, " ");
    }

    imprimir(head);

    return 0;
}