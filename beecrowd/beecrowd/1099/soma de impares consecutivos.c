#include <stdio.h>

int main(void){
    int caso, a, b, cont, soma=0, i;
    scanf("%d", &caso);

    for(cont = 1; cont<=caso; cont++){
        scanf("%d %d",&a, &b);

        if(a>b){
             for(i = b+1; i < a; i++){
                if(i%2!=0){
                soma+=i;
            }

        }
       
        }else{
            for(i = a+1; i < b; i++){
            if(i%2!=0){
                soma+=i;
            }
        
        }    
    }
    printf("%d\n", soma);
    soma = 0;   
}
return 0;
}