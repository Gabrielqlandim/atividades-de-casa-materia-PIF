#include <stdio.h>
//g- graduação a-atividades, m-material, c-campus
int main(void){
  
  int g, a, m, c;
  //escreva o numero de graduações, atividades, material e campus
  scanf("%d %d %d %d", &g, &a, &m, &c);

  int GA[g][a];
  
  for(int i=0;i<g;i++){
    for(int j=0;j<a;j++){
      //valores da matriz gXa
      scanf("%d ", &GA[i][j]);
    }
    
  }
  int AM[a][m];
  for(int i=0;i<a;i++){
    for(int j=0;j<m;j++){
      //valores da matriz aXm
      scanf("%d", &AM[i][j]);
    }
  }
  //valores da matriz mXc
  int  MC[m][c];
  for(int i=0;i<m;i++){
    for(int j=0;j<c;j++){
      scanf("%d", &MC[i][j]);
    }
  }
  int GM[g][m];
  for(int i=0;i<g;i++){
    for(int j=0;j<m;j++){
      GM[i][j]=0;
      for(int k=0;k<a;k++){
         GM[i][j]+= GA[i][k]*AM[k][j];
      }
    }
  }
  int GC[g][c];
  for(int i=0;i<g;i++){
    for(int j=0;j<c;j++){
      GC[i][j]=0;
      for(int k=0;k<m;k++){
        GC[i][j]+= GM[i][k]*MC[k][j];
      }
    }
  }
  
  
  int maior[c];
  for(int j=0;j<c;j++){
    maior[j]=0;
    for(int i=0;i<g;i++){
      int numero = GC[i][j];
      int cont = 0;
      while(numero!=0){
        numero/=10;
        cont++;
      }
      if(cont>maior[j]){
        maior[j]=cont;
      }
    }
  }
  for(int i=0;i<g;i++){
    for(int j=0;j<c;j++){
      if(j==0){
        printf("%*d",maior[j], GC[i][j]);
      }
      else{
        printf(" %*d", maior[j], GC[i][j]);
      }

    }
    printf("\n");
  }
  return 0;
  
}