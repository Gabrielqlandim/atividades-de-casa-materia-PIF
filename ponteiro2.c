#include <stdio.h>

int main(void) {
  int arr[5] = {1, 2, 3, 4, 1};
  int *ptr = NULL;
  int *ptr_2 = NULL;

  ptr = &arr[0]; //ponteiro aponta para o elemento primairo
  ptr_2 = &arr[3]; //ponteiro aponta para o 4 elemento
        
  if( *ptr < *ptr_2){
    printf("Hello\n");
  }
 
  printf("ptr = %p \n", ptr); //endereço da variavel que ptr aponta
  printf("ptr_2 = %p \n", ptr_2);   //endereco da variavel que ptr2 aponta 
  printf("*(ptr+2) = %d \n", *(ptr+2)); //vpega o valor da variavel e aponta para ela +2
  printf("*(ptr)+2 = %d \n", *(ptr)+2); //mesma coisa do de cima
  printf("*(ptr-1) = %d\n", *(ptr-1)); //pega o valor da variavel e diminui 1
  printf("*(ptr-2) = %d\n", *(ptr-2)); //mesma coisa do de cima mas diminui 2


  return 0;
}


