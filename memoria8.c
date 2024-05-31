#include <stdio.h>
#include <stdlib.h>

int main(void){
    int *arr, tam;

    printf("Digite o tamanho do array: ");
    scanf("%d", &tam);

    arr = (int*)malloc(tam*sizeof(int));

    for(int i=0;i<tam;i++){
        printf("Elementos do array: ");
        scanf("%d", &arr[i]);
    }

    printf("\nPrint do array:");
    for(int i=0;i<tam;i++){
        printf("%d ", arr[i]);
    }
    free(arr);
    printf("\nPrint do array:");
    for(int i=0;i<tam;i++){
        printf("%d ", arr[i]);
    }
    return 0;

}