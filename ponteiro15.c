#include <stdio.h>
#include <stdlib.h>

int main(void){
    void *p;
    int p1=10;

    p =&p1;

    printf("conteudo: %d", *(int*)p);
    return 0;
}