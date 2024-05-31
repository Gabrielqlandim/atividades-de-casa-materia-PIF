#include <stdio.h>
#include <stdlib.h>

typedef struct node{
    int valor;
    struct node *prox;
}node;

void inserir(node **head, int n){
    node *novo=(node*)malloc(sizeof(node));
    while(novo!=NULL){
        novo->valor = n;
        novo->prox = *head;
        *head = novo;
    }
}

void imprimir(node *head){
    while(head!=NULL){
        printf("%d - > ", head->valor);
        head = head->prox;
    }
    printf("NULL");
}

int remove(node **head){
    node *temp;
    int valor = 0;
    while(*head!=NULL){
        valor = (*head)->valor;
        temp=*head;
        (*head) = (*head)->prox;
        free(temp);
    }
    return valor;
}

int main(void){
    node *head = NULL;

    int t;
    scanf("%d", &t);
    for(int i=0;i<t;i++){
        inserir(&head,i);
    }

    imprimir(head);
    remover(&head);
}