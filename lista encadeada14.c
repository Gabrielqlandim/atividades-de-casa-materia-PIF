#include <stdio.h>
#include <stdlib.h>

typedef struct node{
    int valor;
    struct node *prox;
}node;

void inserir(node **head, int *vet, int n){
    for(int i=0;i<n;i++){
        node *novo = (node*)malloc(sizeof(node));
        if(novo==NULL){
            printf("alocação n bem sucedida");
        }
        else{
            while(novo!=NULL){
                novo->valor = vet[i];
                novo->prox = *head;
                head = novo;
            }
        }
    }
}

void imprimir(node *head){
    while(head!=NULL){
        printf("%d -> ", head->valor);
        head = head->prox;
    }
    printf("NULL");
}

int tamanho(node *head){
    int cont=0;
    while(head!=NULL){
        head = head->prox;
        cont++;
    }
    return cont;
}

void delete(node **head, int valor){
    node *temp = head;
    if(temp->valor==valor){
        *head = temp->prox;
        free(temp);
        return;
    }
    while(temp!=NULL && temp->valor != valor){
        temp = temp->prox;
    }
    if(temp==NULL){
        printf("valor nao encontrado");
    }
    node *anterior;
    while(anterior->prox != temp->prox){
        anterior = anterior ->prox;
    }
    anterior->prox = temp->prox;
    free(temp);
}

void ordena(node **head){
    node *atual = *head;
    node *index = NULL;
    int temp;
    if(head==NULL){
        return;
    }
    while(atual!=NULL){
        index = atual->prox;
        while(index!=NULL){
            if(atual->prox > index->prox){
                temp = atual->prox;
                atual->prox = index->prox;
                index->prox = temp;
            }
            index = index->prox;
        }
        atual = atual ->prox;
    }
}

int main(void){
    node *head = NULL;
    int t, valor;
    printf("Tamanho: ");
    scanf("%d",&t);
    int vet[t];
    for(int i=0;i<t;i++){
        printf("Numero: ");
        scanf("%d", &vet[i]);
    }
    inserir(&head, vet, t);

    printf("lista: ");
    imprimir(head);
    printf(("O tamanho e de: %d", tamanho(head)));
    ordena(&head);
    printf("lista: ");
    imprimir(head);
    printf("Numero para remver: ");
    scanf("%d", &valor);
    delete(&head, valor);
    printf("lista: ");
    imprimir(head);
    printf(("O tamanho e de: %d", tamanho(head)));
    ordena(&head);
    printf("lista: ");
    imprimir(head);
    while(head!=NULL){
        node *temp = head;
        head = head->prox;
        free(temp);
    }
    return 0;
}