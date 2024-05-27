#include <stdio.h>
#include <string.h>

struct prod{
  char str[50];
  float preco;
};

struct feira{
  char str2[50];
  int quant;
};

int main(void){
  int v;
  scanf("%d",&v);

  for(int i=0;i<v;i++){
    int m;
    scanf("%d",&m);
    struct prod prod[m];
    for(int j=0;j<m;j++){
      scanf("%s %f", prod[j].str, &prod[j].preco);
    }
    int p;
    scanf("%d",&p);
    float custo = 0.0;
    
    for(int k=0;k<p;k++){
      struct feira f[50];
      scanf("%s %d", f[k].str2, &f[k].quant);

      for(int w=0;w<m;w++){
        if(strcmp(f[k].str2,prod[w].str)==0){
          custo += f[k].quant * prod[w].preco;
          break;
        }
      }
    }
    printf("R$ %.2f\n", custo);
  } 
  return 0;
}