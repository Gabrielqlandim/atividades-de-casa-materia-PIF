#include <stdio.h>

int mdc(int a, int b){
    int r;
    if(b==0){
        return a;
    }
    else{
        r = mdc(b, a%b);
    }
    return r;
}

int main(void){
    int a,b,c;
    printf("Digite dois numero inteiros \n");
    scanf("%d %d", &a, &b);
  
  int mdc1 = mdc(a,b);

  printf("O mdc dos numeros dados foi: %d", mdc1);
  
  printf("Digite um terceiro numero \n");
  scanf("%d",&c);

  int mdc2 = mdc(c,mdc1);
    printf("O mdc dos numeros dados foi: %d", mdc2);
  return 0;
}