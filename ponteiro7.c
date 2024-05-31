#include<stdio.h>

int main(void){
    int p = 9, y=0;
    int *c = &p;//aqui logo na declaração do ponteiro ele ja aponta para o endereço de memoria de p

    printf("Endereco: %p", c);
    printf("\nValor: %d", *c);
    return 0;
    
}