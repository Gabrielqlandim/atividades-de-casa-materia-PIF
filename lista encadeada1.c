#include <stdio.h>
#include <stdlib.h>

typedef struct{
    int valor;
    struct node *prox;

}node;

void inserir(node **head, int n){
    node *novo = (node*)malloc(sizeof(node));
    if(novo != NULL){
        novo->valor = n;
        novo->prox = *head;
        *head = novo;
    }

}

void imprimir (node *head){
    while(head != NULL){
        printf("%d ->", head->valor);
        head = head->prox;
    }
    printf("NULL\n");
}

int tamanho(node *head){
    int cont =0;
    while(head!= NULL){
        head = head -> prox;
        cont++;
    }
    return cont;
}

int remover(node **head){
    node *temp;
    int valor =0; //retornar o valor tirado
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
    node *head = NULL; // Inicializa a lista encadeada como vazia
    printf("Qual o tamanho que voce quer para a lista: ");
    scanf("%d", &t);
    // Insere alguns elementos na lista
    for(int i = 1; i <= t; i++){
        inserir(&head, i);
    }

    // Imprime a lista
    printf("Lista: ");
    imprimir(head);

    // Imprime o tamanho da lista
    printf("Tamanho da lista: %d\n", tamanho(head));

    // Remove os elementos da lista e imprime os valores removidos
    int valorRemovido;
    while((valorRemovido = remover(&head)) != 0){
        printf("Valor removido: %d\n", valorRemovido);
    }

    return 0;
}