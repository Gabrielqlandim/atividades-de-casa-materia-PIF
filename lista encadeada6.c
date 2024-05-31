#include <stdio.h>
#include <stdlib.h>

typedef struct{
    int valor;
    struct node *prox;
}node;

void inserir(node **head, int n){
    node *novo = (node*)malloc(sizeof(node));
    while(novo!=NULL){
        novo->valor = n;
        novo->prox = *head;
        *head = novo;
    }
}

void imprimir(node *head){
    while(head!=NULL){
        printf("%d -> ", head->prox);
        head = head->prox;
    }
    printf("NULL");

}

int tamanho(node *head){
    int cont =0;
    while(head!=NULL){
        head = head->prox;
        cont++;
    }
    return cont;
}

int remover(node **head){
    node *temp;
    int valor = 0;
    while(*head!=NULL){
        valor = (*head)->valor;
        temp = *head;
        *head = (*head)->prox;
        free(temp);    
    }
}

int main(void){
    int t;
    node *head=NULL;
    for(int i=0;i<t;i++){
        inserir(&head, t);
    }
    printf("lista: ");
    imprimir(head);
    printf("Tamanho: %d", tamanho(head));

    int ValorR;

    while((ValorR = remover(&head))!=0){
        printf("Valor removido: %d\n",ValorR );
    }
    return 0;
}