#include <stdio.h>
#include <string.h>

struct aluno{
    char nome[20];
    int matricula;
    float notas;
};

int main(void){
    int Quant;
    printf("Digite a quantidade de alunos: ");
    scanf("%d", &Quant);
    struct aluno a[Quant];

    for(int i=0;i<Quant;i++){
        printf("Nome: ");
        scanf("%s",a[i].nome);
        printf("\nMatricula: ");
        scanf("%d", &a[i].matricula);
        printf("\nNotas: ");
        scanf("%f", &a[i].notas);
    }
    printf("\n");

    for(int i=0;i<Quant;i++){
        printf("%s %d %f", a[i].nome,a[i].matricula, a[i].notas);
    }
    return 0;
}