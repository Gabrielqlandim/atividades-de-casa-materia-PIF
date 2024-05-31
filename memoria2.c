#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void){
  int n=0, size = 0;
  char **nomes;
  char tmp[100];
  scanf("%d", &n);
  nomes = (char**)malloc(n*sizeof(char*));

  for(int i=0; i<n; i++){
    scanf("%s", tmp);
    size = strlen(tmp)+1;
    nomes[i] = (char*)malloc((size)*sizeof(char));
    strncpy(nomes[i],tmp,size);
  }

  for(int j;j<n;j++){
    printf("%s\n", nomes[j]);
  }

  for(int k=0;k<n;k++){
    free(nomes[k]);
  }

  free(nomes);
  
  return 0;
}