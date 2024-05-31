#include <stdio.h>

void soma10(int *i){//pega o valor de x
  *i = *i +10;//mesma coisa que *i+=10
  printf("Valor de i, x: %p, %d\n", i, *i);
}

int main(void){
  int x=0;
  printf("Digite um numero: ");
  scanf("%d",&x);
  soma10(&x);//recebe como parametro o endereco de x
  printf("Novo valor de x = %d, end x=%p\n", x,&x);

  fflush(stdout);
  return 0;
