#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void){
  FILE *in, *out;
  char ch;

  in=fopen("test.txt", "r");
  out = fopen("NVTESTE3.txt", "w");

  if(in == NULL){
    printf("Arquivo-fonte nao pode ser aberto\n");
	exit(1);
  }
  if(out == NULL){
    printf("Arquivo-fonte nao pode ser aberto\n");
	exit(1);
  }

  while(!feof(in)){
    ch = fgetc(in);

    if(!feof(in) && ch != 'v'){
        fputc(ch, out);
    }
  }
  fclose(in);
  fclose(out);
  return 0;
}