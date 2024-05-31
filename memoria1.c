#include <stdio.h>
#include <stdlib.h>

int main(void) {
    system("cls");
  int *arr;
  // int arr[6]
  int len, i;

  printf("Qual o tamanho do array: \n");
  scanf("%d", &len);
  arr = (int *)malloc(len * sizeof(int));
  printf("%p\n", arr);

  printf("Quais os elementos do array:\n");
  for (i = 0; i < len; i++) {
    scanf("%d", &arr[i]);

  } // leitura dos elementos

  printf("Novo array obtido\n");
  for (i = 0; i < len; i++) {
    printf("%d\t", arr[i]);
    printf("%p\n", (arr + i));
  } // impressao dos elementos

  free(arr);
  for (i = 0; i < len; i++) {
    printf("%d\t", arr[i]);
    printf("%p\n", (arr + i));
  } // impressao dos elementos

  return 0;
}