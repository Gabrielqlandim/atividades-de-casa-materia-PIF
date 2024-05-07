#include <stdio.h>

int main(void){
    int p[5];
    int im[5];
    int n, contp = 0, conti = 0;
    for(int i=0; i<15;i++){
        //digite um numero
        scanf("%d", &n);
        if(n%2!=0){
            im[conti] = n;
            conti++;
            if(conti == 5){
                for(int j=0;j<5;j++){
                    printf("impar[%d] = %d",j, im[j]);
                    printf("\n");
                }
                conti = 0;
                for(int k=0;k<5;k++){
                    im[k] = 0;
                }

            }

        }
        else if(n%2==0){
            p[contp] = n;
            contp++;
            if(contp == 5){
                for(int j=0;j<5;j++){
                    printf("par[%d] = %d",j, p[j]);
                    printf("\n");
                }
                contp = 0;
                for(int k=0;k<5;k++){
                    p[k] = 0;
                }          
            }

        }

    }
    for(int h=0;h<5;h++){
        if(im[h]==0){
            break;
        }
        else{
            printf("impar[%d] = %d",h, im[h]);
            printf("\n");
        }
    }
    for(int h=0;h<5;h++){
        if(p[h]==0){
            break;
        }
        else{
            printf("par[%d] = %d",h, p[h]);
            printf("\n");

        }
    }
    return 0;
}