#include <stdio.h>
#include <math.h>
#include <stdlib.h>

struct pontos{
    int x;
    int y;
};

struct rect{
    struct pontos p1;
    struct pontos p2;
};

float distancia(struct rect pt1, struct rect pt2){
    float d;
     return d = sqrt(pow(pt1.p1.x-pt2.p2.x,2)+(pt1.p1.y-pt2.p2.y));
}
float area(struct rect pt1, struct rect pt2){
    float a, altura, base;
    base = abs(pt1.p1.x - pt2.p2.x);
    altura = abs(pt1.p1.y - pt2.p2.y);
    return a = base*altura;
}

int main(void){
    struct rect pt1;
    struct rect pt2;

    printf("Digite as coordenadas do novo ponto: \n");
    scanf("%d %d", &pt1.p1.x, &pt1.p1.y);
    printf("Digite as coordenadas do outro ponto: \n");
    scanf("%d %d", &pt2.p2.x, &pt2.p2.y);

    printf("Distancia: %f", distancia(pt1, pt2));
    printf("Area: %f", area(pt1,pt2));
    
}
