#include <stdio.h>

int main(void){
    char S, M, o;
    float m=0.0, s=0.0;
    scanf("%c", &o);
    float mat[12][12];
    for(int i=0;i<12;i++){
        for(int j=0;j<12;j++){
            scanf("%f", &mat[i][j]);
        }
}    
    if(o == 'M'){
        for(int i=0;i<12;i++){
        for(int j=0;j<12;j++){
            if(i<j){
                s+=mat[i][j];
            }
            
        }

    }
    m = s/(12*11/2);
    printf("%.1f\n", m);
    }else if (o == 'S'){
        for(int i=0;i<12;i++){
        for(int j=0;j<12;j++){
            if(i<j){
                s+=mat[i][j];
            }
            
        }

    }
    printf("%.1f", s);
}

return 0;

}