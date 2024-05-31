#include <stdio.h>

void swap(int *n1, int *n2){//recebe os enderços das variaves e pega os valores
    int temp;
    temp = *n1;
    *n1 = *n2;
    *n2 = temp;
}

int main(void){
    int *p1, *p2;
    int n1, n2;
    printf("Digite um nuemro: ");
    scanf("%d %d", &n1,&n2);
    swap(&n1, &n2); //manda como parametro os endereços das variaves
    printf("Digite um nuemro: %d", n1);
    printf("\nDigite um nuemro: %d", n2);

 
  return 0;
}