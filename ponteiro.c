#include <stdio.h>

int main(void) {
  int x = 15, y=2, z[10];
  int *ip = NULL;
  ip = &x;//ponteiro ip aponta para o endereço de x
  printf("O endereco de ip e: %p", ip);//vai mostrar o endereço da variavel que ele aponta em formato hexadecimal
  printf("\nO valor de ip e: %d", *ip);//valor da variavel que ele aponta
  printf("\nO valor de y e: %d", y);
y = *ip;//o valor de y muda para o valor da variavel que o ponteiro aponta    
  printf("\n O novo valor de y e: %d", y);//valor de y mudado
  printf("\n O valor de x e: %d", x);//mostra o valor de x que no caso vai ser igual ao de y

  *ip =0;//atribui zero ao valor da variavel que o ponteiro aponta
  printf("\nO novo valor do x e: %d", x);

  ip = &z[0];//o ponteiro aponta agora para z e o endereço é o primeiro elemento do array

  printf("\nO novo endereco de ip e: %p", ip);//mostra o endereço do array
  printf("\nO valor de ip e: %d", *ip);//mostra o valor primeiro elemento do array

  for(int i=0;i<10;i++){
    z[i] = 2*i +1;//percorre o array e multiplicando 2 no valor e depois somando mais 1
  }
  printf("\nO novo endereco de ip e: %p", ip);//mostra o valor do endereço
  printf("\nO valor de ip+1 e: %d", *(ip+1));//aponta pro proximo valor do endereco
  printf("\nO valor de ip e: %d", *ip);//mostra o valor do endereço apontado
  printf("\nO valor do proximo endereco da memoria de ip e: %d", *(ip+2)); //incrementa dois no valor do endereço e aponta pra ele
  
 return 0;

}