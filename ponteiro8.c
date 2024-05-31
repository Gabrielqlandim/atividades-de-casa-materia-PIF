#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int M[5] = {92,81,70,69,58};
  int i,*p = M; //inicializa e cria um ponteiro variavel p que aponta para o comeco do array

  for(i=0; i<5; i++){ //busca por index do array
    M[i]++;//incrementa um nos valores do array
    
    printf("%d\t", p[i]);
  }
  printf("\n");

  for(i=0;i<5;i++){
    M[i]--;//decrementa 1
    
    printf("%d\t", *(p+i));
  }
  printf("\n");
  
  for(i=0;i<5;i++){
    M[i] *= 2;//pega os valores do array e multi´lica por dois
    printf("%d\t", *(p++));
  }
  
  printf("\n");
  return 0;
}