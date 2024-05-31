#include <stdio.h>
#include <stdlib.h>

int main(void){
    int n, *p;

    printf("Digite um numero: ");
    scanf("%d", &n);

    p = (int*)malloc(sizeof(int));

    *p = n;

    printf("O numero foi: %d", *p);

    free(p);

    return 0;
}