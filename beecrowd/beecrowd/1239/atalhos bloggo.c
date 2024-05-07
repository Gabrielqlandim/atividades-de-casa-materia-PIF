//esse codigo ta com 5% de erro, não sabia oq era, mas mandei assim mesmo

#include <stdio.h>
#include <string.h>

int main(void){
    char str[51], r[101];
    int tamanho, contU = 0, contA = 0, resultado = 0;

    while(fgets(str, 50, stdin) != NULL){
        tamanho = strlen(str);
        if(str[tamanho - 1] == '\n'){
            str[tamanho-1] = '\0';
        }
        for(int i=0;i<tamanho; i++){
            if(str[i] == '_'){
                if(contU == 0){
                  if(resultado+3<sizeof(r)){
                    r[resultado++] = '<';
                    r[resultado++] = 'i';
                    r[resultado++] = '>';
                    contU = 1;
                  }             
                }
                else{
                  if(resultado+4<sizeof(r)){
                    r[resultado++] = '<';
                    r[resultado++] = '/';
                    r[resultado++] = 'i';
                    r[resultado++] = '>';
                    contU = 0;
                  }        
                }
              }
            else if(str[i] == '*'){
                if (contA == 0) {
                  if(resultado+3<sizeof(r)){
                    r[resultado++] = '<';
                    r[resultado++] = 'b';
                    r[resultado++] = '>';
                    contA = 1;
                  }           
                }
                else{
                  if(resultado+4<sizeof(r)){
                    r[resultado++] = '<';
                    r[resultado++] = '/';
                    r[resultado++] = 'b';
                    r[resultado++] = '>';
                    contA = 0;
                  }     
                }
              }
            else{
              if(resultado<sizeof(r)){
                r[resultado++] = str[i];
            }             
          }
        }
        if(resultado<sizeof(r)){
          r[resultado] = '\0';
        }    
        printf("%s\n", r);
        resultado = 0;
      
    }
    
    return 0;
}