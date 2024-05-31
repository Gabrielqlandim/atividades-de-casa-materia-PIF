#include <stdio.h>
#include <string.h>
#include<stdlib.h>

int main(void){
    char *str;
    int tam;

    printf("Digite o tamanho do vetor: ");
    scanf("%d", &tam);

    str = (char*)malloc(tam*sizeof(char));

    printf("Digite a string: ");
    scanf("%s", str);

    printf("A string foi: %s", str);

    free(str);

    return 0;

}