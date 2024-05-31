#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct alunos {
    char nome[51];
    unsigned long int matricula;
    unsigned int faltas;
    float media;
    struct alunos *prox;
} Aluno;

void inserir(Aluno **head, Aluno *novo) {
    Aluno *atual = *head;
    Aluno *anterior = NULL;

    while (atual != NULL && strcmp(atual->nome, novo->nome) < 0) {
        anterior = atual;
        atual = atual->prox;
    }

    if (anterior == NULL) {
        novo->prox = *head;
        *head = novo;
    } else {
        anterior->prox = novo;
        novo->prox = atual;
    }
}

void imprimir(Aluno *head) {
    Aluno *temp = head;
    while (temp != NULL) {
        printf("Nome: %s\n", temp->nome);
        printf("Matrícula: %lu\n", temp->matricula);
        printf("Faltas: %u\n", temp->faltas);
        printf("Média: %.2f\n", temp->media);
        temp = temp->prox;
    }
}

int remover(Aluno **head, char *nome) {
    if (*head == NULL) {
        printf("Lista vazia!\n");
        return 0;
    }

    Aluno *atual = *head;
    Aluno *anterior = NULL;

    while (atual != NULL && strcmp(atual->nome, nome) != 0) {
        anterior = atual;
        atual = atual->prox;
    }

    if (atual == NULL) {
        printf("Aluno '%s' não encontrado na lista!\n", nome);
        return 0;
    }

    if (anterior == NULL) {
        *head = atual->prox;
    } else {
        anterior->prox = atual->prox;
    }

    free(atual);

    printf("Aluno '%s' removido da lista!\n", nome);
    return 1;
}

int main(void) {
    Aluno *head = NULL;

    int n;
    printf("Número de estudantes: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        Aluno *novo = (Aluno*)malloc(sizeof(Aluno));
        printf("Nome: ");
        scanf("%s", novo->nome);
        printf("Matrícula: ");
        scanf("%lu", &novo->matricula);
        printf("Faltas: ");
        scanf("%u", &novo->faltas);
        printf("Média: ");
        scanf("%f", &novo->media);

        novo->prox = NULL;
        inserir(&head, novo);
    }

    printf("\nLista de alunos:\n");
    imprimir(head);

    char nome_a_remover[51];
    printf("\nDigite o nome do aluno a ser removido: ");
    scanf("%s", nome_a_remover);
    remover(&head, nome_a_remover);

    printf("\nLista de alunos após a remoção:\n");
    imprimir(head);

    return 0;
}
