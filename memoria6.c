#include <stdio.h>
#include <stdlib.h>

struct aluno{
    int idade;
    char *nome;
};

int main(void){

    int tam;

    printf("Digite a quantidade de alunos: ");
    scanf("%d", &tam);

    struct aluno *a = (struct aluno*)malloc(tam*sizeof(struct aluno));

    

    for(int i=0;i<tam;i++){
        printf("Digite a idade do aluno: ");
        scanf("%d",&a[i].idade);
        a[i].nome = (char*)malloc(tam*sizeof(char));
        if(a[i].nome == NULL){
            printf("Erro na alocação");
            return 1;
        }
        printf("Digite o nome do aluno: ");
        scanf("%s", a[i].nome);
    }

    for(int i =0;i<tam;i++){
        printf("Nome: %s e idade: %d", a[i].nome, a[i].idade);
        free(a[i].nome);
    }
    free(a);
    

    return 0 ;


}