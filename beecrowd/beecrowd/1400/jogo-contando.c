#include <stdio.h>

int verifica(int n){
  if(n%7==0){
    return 1;
  }
  while(n>0){
    int num;
    num = n%10;

    if(n%10==7 || (n/10)%10==7){
        return 1;
    }
    n /= 10;
  }
  return 0;

}
int main(void){
  int n, m, k;
  while(1){
    int cont = 0, contp=0;
    scanf("%d %d %d", &n, &m, &k);
    if(n==0&&k==0&&m==0){
      break;
    }
    if (n < 2 || n > 100 || m < 1 || m > 100 || k < 1 || k > 100) {
      printf("%d", -1);
      continue;
    }
    while(1){
        for(int i=1;i<n;i++){

        if(contp==k){
          break;
        }
        cont++;
        if(i==m&&verifica(cont)==1){
          contp++;
        }


    }
    for(int i=n;i>1;i--){
      if(contp==k){
        break;
      }
      cont++;
      if(i==m&&verifica(cont)==1){
        contp++;
      }
    }
    if(contp==k){
        break;
    }
    }


    printf("%d\n", cont);

  }
  return 0;
}