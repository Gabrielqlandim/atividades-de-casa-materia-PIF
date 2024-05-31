#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct node{
    char nome[51];
    unsigned long int matricula;
    unsigned int faltas;
    float media;
    struct node *prox;
}node;

void inserir(node **head, char *nome, unsigned long int mat, unsigned int faltas, float media){
    node *temp;
    node *novo = (node*)malloc(sizeof(node));
    
    strcpy(novo->nome,nome);
    novo->matricula = mat;
    novo->faltas = faltas;
    novo->media=media;
    novo->prox=NULL;

    if(*head == NULL){
        *head  = novo;
    }else if((*head)->prox == NULL){
        if(strcmp((*head)->nome,nome)>0){
            novo->prox = *head;
            *head = novo;
        }else{
            (*head)->prox = novo;
        }
    }else{
        temp = *head;
        while(temp->prox != NULL && strcmp(temp->prox->nome, nome)<0){
            temp = temp->prox;
        }
        novo->prox = temp->prox;
        temp->prox = novo;
    }
}

void delete(node **head, unsigned long int mat){
    node *temp = *head, *removido;
    if(*head == NULL){
        printf("Lista vazia\n");
    }
    else{
        if(temp->prox == NULL){
            if(temp->matricula == mat){
                free(temp);
                *head = NULL;
            }
            else{
                printf("Aluno não encontrado\n");
            }
        }
        else{
            if(temp->matricula == mat){
                (*head) = (*head)-> prox;
                free(temp);
            }
            else{
                while(temp->prox != NULL && temp->prox->matricula != mat){
                    temp = temp->prox;
                }
                if(temp ->prox == NULL){
                    printf("Aluno não encontrado\n");
                }
                else{
                    removido = temp->prox;
                    temp->prox = temp->prox->prox;
                    free(removido);
                }
            }
        }
    }
}

void print(node *head){
    if(head == NULL){
        printf("Lista vazia\n");
    }
    else{
        while(head!=NULL){
            printf("Nome %s\n", head->nome);
            printf("Matricula %s\n", head->matricula);
            printf("Faltas %s\n", head->faltas);
            printf("Media %s\n", head->media);
            head = head->prox;

        }
    }
}
int main(void){
    node *head = NULL;
    int op;
    char nome[51];
    unsigned long int matricula;
    unsigned int faltas;
    float media;
    
    while(op!=4){
        printf("Digite uma opcao: ");
        scanf("%d", &op);
        if(op == 1){
            printf("Digite o nome: ");
            scanf("%s", nome);
            printf("Digite a matricula: ");
            scanf("%lu", &matricula);
            printf("Digite as faltas: ");
            scanf("%u", &faltas);
            printf("Digite a media: ");
            scanf("%f", &media);
            inserir(&head, nome, matricula, faltas, media);
        }
        else if(op == 2){
            printf("Digite a matricula: ");
            scanf("%lu", &matricula);
            delete(&head, matricula);
        }
        else if(op==3){
            print(head);
        }
        else if(op == 4){
            printf("Acabou");
        }
        else{
            printf("Opcao invalida - %d\n", op);
        }
    }

}
