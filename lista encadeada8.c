#include <stdio.h>
#include <stdlib.h>

typedef struct node{
    int valor;
    struct node *prox;
}node;

void inserir(node **head, int n){
    node *novo = (node*)malloc(sizeof(node));
    while(novo != NULL){
        novo->valor=n;
        novo->prox = *head;
        *head = novo;
    }
}

void imprimir(node *head){
    while(head!=NULL){
        printf("%d -> ", head->prox);
        head = head -> prox;
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

int remove(node **head){
    node *temp;
    int valor = 0;
    while(head!=NULL){
        valor = (*head)->valor;
        temp = *head;
        *head = (*head)->prox;
        free(temp);
    }
    return valor;
}

int main(void){
    node *head = NULL;
    int t;
    printf("Numero: ");
    scanf("%d", &t);
    for(int i=0; i<t;i++){
        inserir(&head, t);
    }
    printf("Lista: ");
    imprimir(head);
    printf("O tamanho da lista é: %d", tamanho(head));

    int valorR;
    while((valorR = remover(&head))!=0){
        printf("O valr removido foi %d\n", valorR);
    }
    
    return 0;
}