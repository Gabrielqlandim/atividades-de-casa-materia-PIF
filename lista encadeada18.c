#include <stdio.h>
#include <stdlib.h>

typedef struct node{
    int valor;
    struct node *prox;
}node;

void inserir(node **head, int *vet, int n){
    for(int i=0;i<n;i++){
        node *novo = (node*)malloc(sizeof(node));
        while(novo!=NULL){
            novo->valor = vet[i];
            novo->prox = *head;
            *head = novo;
        }
    }
}

void delete(node **head, int valor){
    node *temp = *head, *removido;
    while(head!=NULL){
        if(temp==NULL){
            printf("Vazio");
        }
        else if(temp->prox==NULL){
            if(temp->valor==valor){
                free(temp);
                *head = NULL;
            }
            else{
                printf("nao encontrado");
            }
        }
        else{
            if(temp->valor==valor){
                (*head) = (*head)->prox;
            }
            else{
                if(temp->prox==NULL){
                    printf("nao encontrado");
                }
            }
            while(temp!=NULL && temp->prox->valor != valor){
                temp = temp->prox;
            }
            removido = temp;
            temp->prox = temp->prox->prox;
            free(removido);
        }
    }
}

void print(node *head){
    while(head!=NULL){
        printf("%d -> ", head->valor);
        head=head->prox;
    }
    printf("NULL");
}

int main(void){
    node *head = NULL;
}