#include <stdio.h>
#include <stdlib.h>


void display(int var, int *p);
void update(int *p);
int main(void){
    int var =15;
    int *p = &var;

    display(var, p);

    update(&var);
    
    display(var, p);
    return 0;
}

void display(int var, int *p){
    printf("\n\n");
    printf("Valor de var: %d", var);
    printf("\nEndereço de var: %p", &var);
    printf("\nValor que o ponteiro p representa: %d", *p);
    printf("\nEndereço que tem contido no ponteiro p: %p", p);
    printf("\nEndereço do ponteiro p: %p", &p);
}
void update(int *p){
    *p +=1;
}