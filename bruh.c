#include <stdio.h>
#include <string.h>

struct Pessoa {
  char nome[20];
  char assinatura[20];
};
int main() {
  int n, m, i, j, g, t;
  while (1) {
    scanf("%d", &n);
    if (n == 0) {
      break;
    }
    struct Pessoa pessoas[n];
    for (i = 0; i < n; i++) {
      scanf("%s %s", pessoas[i].nome, pessoas[i].assinatura);
    }
    scanf("%d", &m);
    
    int falsas = 0;
    for(j = 0; j < m; j++){
        char nome[20], assinaturas[20];
        scanf("%s %s", nome, assinaturas);
      for (g = 0; g<m;g++) {
      if (strcmp(pessoas[g].nome, nome) == 0) {
        int encontrou=0;
        if(strlen(pessoas[g].assinatura) == strlen(assinaturas)){
            for(t = 0; pessoas[t].assinatura[t] != '\0' && assinaturas[t] != '\0'; t++){
                if(pessoas[g].assinatura[t] != assinaturas[t]){
                    encontrou++;
            }
            }
            
        }
        if (encontrou > 1) {
          falsas++;
        }
        break;
      }
    } 
}
    
    printf("%d\n", falsas);
  }
  return 0;
}