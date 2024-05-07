#include <stdio.h>
#include <string.h>

struct alunos {
  char str[21];
  char str2[21];
};

struct comparecidos {
  char str3[21];
  char str4[21];
};

int main(void) {
  int Quant;
  while (scanf("%d", &Quant)) {
    if (Quant == 0) {
      break;
    }
    struct alunos a[Quant];

    for (int i = 0; i < Quant; i++) {
      scanf("%s %s", a[i].str, a[i].str2);
    }

    int pres;
    scanf("%d", &pres);
    struct comparecidos p[pres];
    int cont = 0;

    for (int j = 0; j < pres; j++) {
      scanf("%s %s", p[j].str3, p[j].str4);
    }
    for (int j = 0; j < Quant; j++) {
      for (int k = 0; k < pres; k++) {
        int cont2 = 0;
        if (strcmp(a[j].str, p[k].str3) == 0) {

          if (strlen(a[j].str2) == strlen(p[k].str4)) {
            for (int w = 0; a[j].str2[w] != '\0' && p[k].str4[w] != '\0'; w++) {
              if (a[j].str2[w] != p[k].str4[w]) {
                cont2++;
              }
            }
          }
          if (cont2 > 1) {
            cont++;
          }
          break;
        }
      }
    }
    printf("%d\n", cont);
  }
  return 0;
}