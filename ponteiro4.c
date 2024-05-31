#include <stdio.h>
#include <stdlib.h>

void reajuste (float *preco){//pega o valor que esta no endereço
    float reaj;
    reaj = (*preco) * 0.2;
    *preco *=1.2;
}

int main(void){
    float preco;
    printf("Insira o preço atual: ");
    scanf("%f", &preco);
    reajuste(&preco);//recebe o enderço da variavel
    printf("\nO valor do novo preco foi de: %f", preco);
}