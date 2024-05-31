#include <stdio.h>
#include <math.h>

struct pontos{
    int x;
    int y;
};

int main(void){
    struct pontos p;
    struct pontos p2;
    printf("Digite os pontos do grafico: ");
    scanf("%d %d", &p.x, &p.y);
    printf("\nOs pontos que voce declarou são: %d %d", p.x, p.y);
    printf("\nDigite os segundos pontos: ");
    scanf("%d %d", &p2.x, &p2.y);
    printf("\nOs pontos que voce declarou são: %d %d", p2.x, p2.y);
    double d;

    d = sqrt(((p2.x-p.x)*(p2.x-p.x) + (p2.y-p.y)*(p2.y-p.y)));
    
    printf("A distancia é: %f", d);
    return 0;
}