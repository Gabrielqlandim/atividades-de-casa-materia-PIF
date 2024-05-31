#include <stdio.h>
#include <stdlib.h>

typedef struct{
    int valor;
    struct node *prox;
   
}node;

void inserir(node **head,int *vet, int n){
    for(int i=0; i<n; i++){
        node *novo =(node*)malloc(sizeof(node));
    if(novo !=NULL){
        novo->valor = vet[i];
        novo->prox = *head;
        *head = novo;
    }
    }
    
}

void imprimir(node *head){
    while(head!= NULL){
        printf("%d ->", head->valor);
        head = head->prox;
    }
}

int tamanho(node*head){
    int cont =0;
    while(head!=NULL){
        head = head->prox;
        cont ++;
    }
    return cont;
}

void remove(node **head, int valor){
    node *atual = *head;
    if(atual->valor==valor){
        *head = atual->prox;
        free(atual);
        return;
    }
    while(atual!=NULL && atual->valor != valor ){
        atual = atual->prox;
    }

    if(atual==NULL){
        printf("Valor n encontraddo");
        return;
    }
    node *anterior = *head;

    while(anterior ->prox !=atual){
        anterior = anterior->prox;
    }
    anterior-> prox = atual ->prox;

    free(atual);
}

int main(void){
    int n;
    node *head = NULL;
    printf("Digite a qunatidade de numeros que voce quer ter na lista: ");
    scanf("%d",&n);
    int vet[n];

    for(int i=0;i<n;i++){
    printf("Digite um numero: ");
    scanf("%d",&vet[i]);
    }
    inserir(&head, vet, n);

    printf("A lista tem os  numeros: ");
    imprimir(head);
    printf("A lista tem o tamanho: %d ", tamanho(&head));

    
    printf("Digite um valor para remover: ");
    int r;
    scanf("%d", &r);
    remover_valor(&head, r);
    
    printf("A lista após a remoção: ");
    imprimir(head);
    printf("A lista tem o tamanho: %d\n", tamanho(head));

    while (head != NULL) {
        node *temp = head;
        head = head->prox;
        free(temp);
    }
    return 0;
}
