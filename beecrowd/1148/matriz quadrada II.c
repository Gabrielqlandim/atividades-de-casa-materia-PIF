#include <stdio.h>

int main(void){
    int i, j, e;
  while(1){
    scanf("%d", &e);
    if(e==0){
        break;
    }
    
    int m[e][e];
    for(i=0;i<e;i++){
        for(j=0;j<e;j++){
            if(i-j>=0){
                m[i][j] = (i-j) +1;
            }else{
                m[i][j] = -(i-j) +1;
            }
        }
    }
    for(i=0;i<e;i++){
        for(j=0;j<e;j++){
          if(j==0){
            printf("%3d", m[i][j]);
          }else{
            printf(" %3d", m[i][j]);
          }
            
        }
      printf("\n");
    }
    printf("\n");
  }  
}
