//esse codigo esta com presentation error, não alterei pois meuus professores aceitam esse tipo de erro

#include <stdio.h>
#include <string.h>

int main(void){
  int tamanho, cont=0;
  char break1;
  while(scanf("%d", &tamanho)!=EOF){
    cont++;
    if(tamanho<20 || tamanho>44){
      break;
    }
    int contM = 0, contH=0, tamanho2;
    char s;
    while(scanf("%d %c%c",&tamanho2, &s, &break1)==3){
      if(tamanho2==tamanho){
        if(s=='M' || s=='m'){
          contH++;
        }
        else if(s=='F' || s=='f'){
          contM++;
        }
      }
      if(break1=='\n'){
        break;
      }
    }
    printf("Caso %d:\nPares Iguais: %d\nF: %d\nM: %d\n\n", cont, contH + contM, contM, contH);

  }
  return 0;
}