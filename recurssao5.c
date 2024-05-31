#include <stdio.h>
#include <stdlib.h>

int sum_array(int *arr, int n);

int main(void) {
  int *arr,size, sum_1 = 0, sum_2 = 0;
  int i;

  printf("Digite o tamanho do array: ");
  scanf("%d",&size);

  arr = (int *)malloc(size*sizeof(int));

  printf("Digite os elementos do array: ");
  for(i=0; i<size; i++){
    scanf("%d",&arr[i]);
    sum_1 = sum_1 + arr[i]; //iterativa
  }

  sum_2 = sum_array(arr,size);
  printf("A soma dos elementos do array eh: \n");
  printf("Iterativa = %d\n", sum_1);
  printf("Recursiva = %d", sum_2);
  
  return 0;
}

int sum_array(int *arr, int size){
    if(size==0){
        return 0;
    }else{
        return arr[size-1] + sum_array(arr, size-1);
    }
}