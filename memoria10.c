#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    int **mat, linha, coluna;
    printf("Digite o valor do tamanho: ");
    scanf("%d %d", &linha, &coluna);

    mat = (int**)calloc(linha,sizeof(int*));

    for(int i=0;i<linha;i++){
        mat[i] = (int*)calloc(linha,sizeof(int));
    }

    for(int i=0;i<linha;i++){
        for(int j=0;j<coluna;j++){
            printf("Valores da matriz: ");
            scanf("%d", &mat[i][j]);
        }
    }

    for(int i=0;i<linha;i++){
        for(int j=0;j<coluna;j++){
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
    for(int i=0;i<linha;i++){
        free(mat[i]);
    } 
    free(mat);

    for(int i=0;i<linha;i++){
        for(int j=0;j<coluna;j++){
            printf("%d ", mat[i][j]);
            free(mat[i]);
        }
        printf("\n");
    }
    return 0;
}