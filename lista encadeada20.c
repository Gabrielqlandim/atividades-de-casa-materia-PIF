#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct alunos{
    char nome[51];
    unsigned long int matricula;
    unsigned int faltas;
    float media;
    struct alunos *prox;
}alunos;

void inserir(alunos **head, char *nome, unsigned long int mat, unsigned int faltas, float media){
    alunos *novo = (alunos*)malloc(sizeof(alunos));
    alunos *temp;
    while(novo!=NULL){
        strcpy(novo->nome,nome);
        novo->matricula = mat;
        novo->faltas = faltas;
        novo->media = media;
        novo = novo->prox;
    }
    if(*head == NULL){
        *head = novo;
    }
    else{
        if((*head)->prox==NULL){
            if(strcmp((*head)->nome,nome)>0){
                novo->prox = (*head);
                *head = novo;
            }
            else{
                (*head)->prox = novo;
            }
        }
        else{
            temp = *head;
            while(temp!=NULL && strcmp(temp->nome,nome)<0){
                temp = temp->prox;
            }
            novo->prox=temp->prox;
            temp->prox=novo;
        }
    }
}

void delete(alunos **head, unsigned long int mat){
    alunos *temp=*head, *removido;
    if(temp==NULL){
        printf("lista vazia");
    }
    else{
        if(temp->prox==NULL){
            if(temp->prox== mat){
                free(temp);
                *head = NULL;
            }
            else{
                printf("aluno nao encontrado");
            }
        }
        else{
            if(temp->matricula==mat){
                (*head) = (*head)->prox;
                free(temp);
            }
            while(temp!=NULL && temp->prox->matricula !=mat){
            temp=temp->prox;
        }
        removido =temp->prox;
        temp->prox = temp->prox->prox;
        free(removido);

        }
        
    }

}

int main (void){
    alunos *head = NULL;
    char nome[51];
    unsigned long int matricula;
    unsigned int faltas;
    float media;
    int op;
    while(op!=5){
        prinf("Escolha a operacao: ");
        scanf("%d",&op);
        if(op==1){
            printf("Digite o nome: ");
            scanf("%s", nome);
            printf("Digite a matricula: ");
            scanf("%lu", &matricula);
            printf("Digite as faltas: ");
            scanf("%u", &faltas);
            printf("Digite a media: ");
            scanf("%f", &media);
            inserir(&head, nome, matricula, faltas, media );
        }
        else if(op==2){
            printf("Digite a matricula: ");
            scanf("%lu", &matricula);
            delete(&head, matricula);
        }
        else if(op==3){
            imprimir(head);
        }
        else if(op==4){
            print("tamanho: %d", tamanho(head, matricula));
        }
        else if(op==5){
            printf("Acabou");
        }
        else{
            printf("operação invalida");
        }
    }
    return 0;
}