#include <stdio.h>

int main(void){
    int t,v;
    scanf("%d", &t);
    scanf("%d", &v);
    float d;
    d=t*v;

    float q;
    q = d/12.0;

    printf("%.3f\n", q);
}