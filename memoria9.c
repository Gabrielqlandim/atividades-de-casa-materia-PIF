#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    int *vet, tam;
    printf("Digite o tamanho do vetor: ");
    scanf("%d", &tam);

    vet = (int*)calloc(tam,sizeof(int));

    for(int i=0;i<tam;i++){
        printf("Numeros do array: ");
        scanf("%d", &vet[i]);
    }

    printf("\nPrint do vetor: ");

    for(int i=0;i<tam;i++){
        printf("%d ", vet[i]);
    }

    free(vet);

    printf("\nPrint do vetor: ");

    for(int i=0;i<tam;i++){
        printf("%d ", vet[i]);
    }
    return 0;
}