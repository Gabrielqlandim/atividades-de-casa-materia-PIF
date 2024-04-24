#include <stdio.h>

int main(void){
    int c, q;
    scanf("%d %d", &c, &q);
    
    float t;
    
    if(c==1){ 
        t = q*4;
        printf("Total: R$ %0.2f\n", t);
    }
    else if(c==2){
        t = q*4.50;
        printf("Total: R$ %0.2f\n", t);
    }
    else if(c==3){
        t = q*5;
        printf("Total: R$ %0.2f\n", t);
    }
    else if(c==4){
        t = q*2;
        printf("Total: R$ %0.2f\n", t);
    }
    else if(c==5){
        t = q*1.50;
        printf("Total: R$ %0.2f\n", t);
    }   
}