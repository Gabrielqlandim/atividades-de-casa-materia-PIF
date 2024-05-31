#include <stdio.h>
#include <stdlib.h>

int main(void){
    system("cls");
    void *p;
    int *p1, p2 = 10;
    p1 = &p2;
    p = &p2;
    printf("endereco que p aponta: %p", p);
    p = &p1;
    printf("\nEndereco agora e: %p", p);
    p = p1;
    printf("\nendereco em p: %p", p);

    return 0;
}