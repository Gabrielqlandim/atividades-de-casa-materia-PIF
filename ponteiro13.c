#include <stdio.h>
#include <stdlib.h>

int main(void){
    int *p = 0x5dc;
    printf("edereco p = %d\n", p);
    p++;
    printf("edereco p = %d\n", p);
    p+=15;
    printf("edereco p = %d\n", p);
    p-=2;
    printf("edereco p = %d\n", p);
    return 0;
}