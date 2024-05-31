#include <stdio.h>
#include <stdlib.h>

int main(void){
    int x =10;
    int *p = &x;
    int **p2 = &p;

    printf("\n endereco de p2: %p", &p2);
    printf("\n endereco que o ponteiro que p2 aponta esta apontando: %p", *p2);
    printf("\nconteudo do endereco do endereco que p2 aponta: %d", **p2);
    printf("\n endereco em p2: %p", p2);
    return 0;
}