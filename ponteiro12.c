#include <stdio.h>
#include <stdlib.h>

int main(void){
    int *p, **p1, x=10;
    float y = 20.00;
    
    p=&x;
    printf("valor que o poteiro p aponta: %d", *p);
    printf("\nendereco que o poteiro p aponta: %p", p);

    **p1 = *p;
    printf("\nponteiro p1 aponnta para o valor: %d", **p1);
    
    return 0;
}