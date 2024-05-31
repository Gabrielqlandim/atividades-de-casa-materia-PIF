#include <stdio.h>
#include <stdlib.h>

void reajusta20(float *preco, float *reajuste);

int main(void) {
  float val_preco, val_reaj;

  do{
    printf("Insira o preco atual: \n");
    scanf("%f", &val_preco);
    reajusta20(&val_preco, &val_reaj); // endereco de memoria das variaveis val_preco e val_reaj
    printf("Valor do novo preco: %.2f\n", val_preco);
    printf("O aumento foi de: %.2f\n", val_reaj);
  }while(val_preco !=0.0);
  return 0;
}

void reajusta20(float *preco, float *reajuste){//vai receber o endereço de memoria e pegar os valores
  *reajuste = (*preco)*0.2;
  *preco = (*preco)*1.2;
}