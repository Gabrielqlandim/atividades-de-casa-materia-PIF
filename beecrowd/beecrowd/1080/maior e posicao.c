#include <stdio.h>

int main(void){
    int valor, n;
    int maior, posicao;
    for (int n = 0; n<100; n++){
        scanf("%d", &valor);
    
        if(valor>maior){
            maior = valor;
            posicao = n;
        }
    }
    printf("%d\n", maior);
    printf("%d\n", posicao + 1);
    return 0;
}