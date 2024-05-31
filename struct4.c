#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct ponto{
    int x;
    int y;
};

struct circulo{
    struct ponto p;
    int r;
};

float area(struct circulo c){
    return 3.14*c.r*c.r;
}

float distancia(struct circulo c, struct circulo c2){
   return sqrt((c2.p.x-c.p.x)*(c2.p.x-c.p.x) + (c2.p.y - c.p.y)* (c2.p.y-c.p.y));
}

int main(void){
    struct circulo c,c2;
    printf("DIgite o centro: ");
    scanf("%d %d", &c.p.x, &c.p.y);
    printf("\nQual o raio: ");
    scanf("%d",&c.r);

    printf("\nA area do circulo é %f", area(c));

    printf("\nDIgite o centro: ");
    scanf("%d %d", &c2.p.x, &c2.p.y);
    printf("\nQual o raio: ");
    scanf("%d",&c2.r);

    printf("\nA area do circulo é %f", area(c2));

    printf("\nA distancia é de %f", distancia(c, c2));
    return 0;
}