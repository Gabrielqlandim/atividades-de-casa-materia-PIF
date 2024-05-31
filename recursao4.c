#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int arr[10] = {1,2,3,4,5,6,7,8,9,10};
  int i;
     //loops
  printf("Array\n");
  for(i=0; i<10; i++){ //para frente
    printf("%d ",arr[i]);
  }
  printf("\n");
  printf("Array Inverso\n");

  for(i=9;i>=0;i--){// para tras 
    printf("%d ", arr[i]);
  }
  printf("\n");
  printf("\n"); 
          //Recursao
  printf("Recursao\n");
  printArray(arr,10,1);
  printf("\n");
  printArray(arr,10,0);

  return 0;
}

void printArray(int *arr, int n, int f){
    if(n==0){
        return;
    }
    else{
        if(f==1){
            printf("%d ", arr[0]);
            printArray(arr+1, n-1,f);
        }else{
            printf("%d ", arr[n-1]);
            printArray(arr, n-1,f);
        }
    }
}