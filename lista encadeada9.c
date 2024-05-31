#include <stdio.h>
#include <stdlib.h>

typedef struct node{
    int valor;
    struct node *prox;
}node;

void inserir(node **head, int *vet, int n){
    for(int i=0;i<n;i++){
        node *novo = (node*)malloc(sizeof(node));
        if(novo!=NULL){
            novo->valor = vet[i];
            novo->prox = *head;
            *head = novo;
        }
    }
}

void imprimir(node *head, int n){
    for(int i=0;i<n;i++){
        printf("%d -> ", head->prox);
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

void remove(node **head, int valor){
    node *atual = head;
    if(atual->valor==valor){
        *head = atual->prox;
        free(atual);
        return;
    }
    while(atual !=NULL && atual->valor != valor){
        atual = atual ->prox;
    }
    if(atual == NULL){
        printf("Valor não encontrado");
        return;
    }
    node *anterior = head;
    while(anterior->prox != atual){
        anterior = anterior->prox;
    }
    anterior->prox = atual->prox;
    free(atual);
}

void ordena(node **head){
    node *atual = head;
    node *index = NULL;
    int temp;
    if (*head==NULL){
        return;
    }
    else{
        while(atual != NULL){
            index = atual->prox;
            while(index != NULL){
                if(atual->valor > index-> valor){
                    temp = atual->valor;
                    atual->valor = index->valor;
                    index-> valor = temp;
                }
                index = index->prox;
            }
            atual = atual->prox;
        }
    }
}

int main(void){
    int n, valor;
    node *head = NULL;
    printf("Digite a qunatidade de numeros que voce quer ter na lista: ");
    scanf("%d",&n);
    int vet[n];

    for(int i=0;i<n;i++){
        printf("Digite o numero: ");
        scanf("%d", &vet[i]);
    }
    inserir(&head, vet, n);

    printf("Lista: ");
    imprimir(head, n);
    printf("Tamanho da lista: %d", tamanho(head));

    printf("Digite um nuemro que queira remover: ");
    scanf("%d", &valor);
    remover(&head, valor);

    printf("Lista: ");
    imprimir(head, n);
    printf("Tamanho da lista: %d", tamanho(head));

    while(head!=NULL){
        node *temp = head;
        head = head->prox;
        free(temp);
    }
    return 0;
}