#include <stdio.h>

int main(void){
    int array[5] = {10,20,30,40,50};
    int *ip = array;//pega o endereço do primeiro elemento do array

    int *New = ip +1;//passa pro proximo enderço

    printf("\nEndereco atual: %p", (void*)ip);//print endereço 1
    printf("\nProximo enereco: %p", (void*)New);//mesma coisa so que dois
    return 0;
}