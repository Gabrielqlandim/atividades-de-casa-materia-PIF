#include <stdio.h>
#include <math.h>
#include <stdlib.h>

struct pontos{
    int x;
    int y;
};

struct react{
    struct pontos pt1;
    struct pontos pt2;
};

float area(float b, float h){
    float a;
    return a = b*h;
}

int main(void){
    struct react screen;
    double d;
    printf("Digite o primeiro ponto: ");
    scanf("%d %d", &screen.pt1.x, &screen.pt1.y);
    printf("\nVocê colocou os pontos: %d %d", screen.pt1.x, screen.pt1.y);
    printf("Digite o primeiro ponto: ");
    scanf("%d %d", &screen.pt2.x, &screen.pt2.y);
    printf("\nVocê colocou os pontos: %d %d", screen.pt2.x, screen.pt2.y);

    d = sqrt(((screen.pt2.x-screen.pt1.x)*(screen.pt2.x-screen.pt1.x) + (screen.pt2.y-screen.pt1.y)* (screen.pt2.y-screen.pt1.y)));

    printf("A distancia foi de: %f\n", d);
     int b = screen.pt2.x - screen.pt1.x;
     int h = screen.pt2.y - screen.pt1.y;
    printf("A area foi de %f\n", area(b,h));
    return 0;
}