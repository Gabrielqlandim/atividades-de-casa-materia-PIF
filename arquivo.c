#include <stdio.h>
#include <stdlib.h>

int main(void){
    FILE *in, *out;
    char nome[30], sobrenome[30];
    int conta;
    float saldo;

    in = fopen("teste.txt", "r");
    out = fopen("resultado.txt", "a");

    if(in == NULL){
    printf("Arquivo-fonte nao pode ser aberto\n");
	exit(1);
  }
  if(out == NULL){
    printf("Arquivo-fonte nao pode ser aberto\n");
	exit(1);
  }

  while(!feof(in)){
    fscanf(in, "%d %s %s %f", &conta, nome,sobrenome, &saldo);

    if(!feof(in) && saldo<0){
        printf("Clientes com saldo negativo: %s %.2f\n", nome, saldo);
        fprintf(out,"Clientes com saldo negativo: %s %.2f\n", nome, saldo);
    }
  }

  fclose(in);
  fclose(out);
  return 0;
}