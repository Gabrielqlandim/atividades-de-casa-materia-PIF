#include <stdio.h>
#include <stdlib.h>


int main(void){
    int **mat, linha, coluna;

    printf("Digite o tamanho da matriz: ");
    scanf("%d %d", &linha, &coluna);

    mat = (int**)malloc(linha*sizeof(int*));

    for(int i=0;i<linha;i++){
        mat[i] = (int*)malloc(coluna*sizeof(int));
    }

    for(int i=0;i<linha;i++){
        for(int j=0;j<coluna;j++){
            printf("Adicionando numeros na matriz: ");
            scanf("%d", &mat[i][j]);
        }
    }
    for(int i=0;i<linha;i++){
        for(int j=0;j<coluna;j++){
            printf(" %d ", mat[i][j]);
        }
        printf("\n");
    }
    
    for(int i=0;i<linha;i++){
        free(mat[i]);
    }
    free(mat);
    return 0;
    
}