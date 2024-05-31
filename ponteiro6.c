void incrementa(int *numero) {
    (*numero)++; // Incrementa o valor apontado pelo ponteiro
}

int main() {
    int x = 5;
    printf("Valor de x antes da função: %d\n", x); // Saída: 5
    incrementa(&x); // Passa o endereço de x para a função
    printf("Valor de x após a função: %d\n", x); // Saída: 6
    return 0;
}
