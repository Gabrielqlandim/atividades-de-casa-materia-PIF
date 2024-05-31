#include <stdio.h>

int main(void){
    int vet[5] = {1,2,3,4,5};

    printf("vet[2] = %d\n", vet[2]);
    printf("vet[2] = %d\n", *(vet+2));
    return 0;
}