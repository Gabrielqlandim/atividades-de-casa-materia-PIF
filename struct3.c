#include <stdio.h>
#include <string.h>

struct alunos{
    char nome[20];
    int matricula;
    float notas;
};

int main(void){
    int e;
    printf("Quantos alunos: ");
    scanf("%d", &e);
    struct alunos a[e];
    for(int i=0;i<e;i++){
        printf("Nome: ");
        scanf("%s", a[i].nome);
        printf("\nMatricula: ");
        scanf("%d", &a[i].matricula);
        printf("\nNotas:");
        scanf("%f", &a[i].notas);
    }
    printf("\n");

    printf("Nome\tMatricula\tNotas\n");

    for(int i=0;i<e;i++){
        printf("%s\t %d\t %.2f\n", a[i].nome, a[i].matricula, a[i].notas);
    }
    return 0;
}