#include <stdio.h>
#include <stdlib.h>

// Função que retorna um ponteiro para um inteiro
int *criarInteiro(int valor) {
    // Aloca memória para um inteiro
    int *ptr = (int *)malloc(sizeof(int));
    if (ptr == NULL) {
        printf("Erro: Não foi possível alocar memória.\n");
        exit(1);
    }
    // Atribui o valor fornecido ao inteiro alocado
    *ptr = valor;
    // Retorna o ponteiro para o inteiro alocado
    return ptr;
}

int main() {
    int valor = 10;
    // Chamando a função para criar um inteiro
    int *ptr_inteiro = criarInteiro(valor);
    
    // Imprimindo o valor do inteiro criado
    printf("Valor do inteiro criado: %d\n", *ptr_inteiro);
    
    // Liberando a memória alocada
    free(ptr_inteiro);
    
    return 0;
}
