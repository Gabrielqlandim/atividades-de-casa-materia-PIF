#include  <stdio.h>
#include <stdlib.h>

typedef struct{
    int valor;
    struct node *prox;
}node;


void add(int **head, int n){
     node *novo = (node*)malloc(sizeof(novo));
    if(novo !=NULL){
        novo->valor = n;
        novo-> prox = *head;
        *head = novo;

    }
}

void imprimir(node *head){
    while(head!=NULL){
        printf("%d ->", head->valor);
        head = head->prox;
    }
}

int tamanho(node *head){
    int cont=0;
    while(head!=NULL){
        head = head->prox;
        cont++;
    }
    return cont;
}

int remover(node **head){
    int valor=0;
    node *temp;

    while(head!=NULL){
        valor = (*head)->valor;
        temp = head;
        head = (*head)->prox;
        free(temp);
    }
    return valor;
}
int main(void){
    node *head = NULL;

    for(int i=0;i<5;i++){
        add(&head, i);
    }

    printf("Lista");
    imprimir(head);
    printf("O tamanho da lista e: %d\n", tamanho(head));

    int removido;

    while(removido = remover(&head)!=NULL){
        printf("Valor removido: %d\n", remover(&head));
    }
    return 0;
}