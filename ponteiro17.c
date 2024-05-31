#include <stdio.h>
#include <stdlib.h>

int main(void){
    
    int *pvet[2];
    int x =10, y[2] = {20,30};
    pvet[0] = &x;
    pvet[1] = y;

    printf("\npvet[o]: %p", pvet[0]);
    printf("\npvet[1]: %p", pvet[1]);

    printf("\n*pvet[o]: %d", *pvet[0]);
    printf("\npvet[1][1]: %d", pvet[1][1]);
}