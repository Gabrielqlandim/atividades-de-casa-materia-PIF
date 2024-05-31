#include <stdio.h>
#include <stdlib.h>

typedef struct{
    int valor;
    struct node *prox;
}node;

void inserir(node **head, int n){
    node *novo = (node*)malloc(sizeof(node));
    if(novo!=NULL){
        novo->valor=n;
        novo->prox=*head;
        *head=novo;
    }
}

void impresso(node *head){
    while(head!=NULL){
        printf("%d ->", head->valor);
        head = head->prox;
    }
    printf("NULL\n");
}

int tamanho(node *head){
    int cont = 0;
    while(head!=NULL){
        head = head->prox;
        cont++;
    }
    return cont;
}

int remove(node **head){
    node *temp;
    int valor = 0;
    if(*head!=NULL){
        valor = (*head)->valor;
        temp = *head;
        *head = (*head)->prox;
        free(temp);
    }
    return valor;
}

int main(void){
    int t;
    node *head = NULL;
    printf("Qa tamannho que voce quer para a lista\n: ");
    scanf("%d", &t);

    for(int i=0; i<t;i++){
        inserir(&head, i);
    }
    printf("Lista: ");
    impresso(head);

    printf("Tamanho da lista: \n", tamanho(head));

    int Vremovido;
    while(head!=NULL){
        Vremovido = remove(&head);
        printf("Valor removido: %d\n", Vremovido);
    }
    return 0;

}