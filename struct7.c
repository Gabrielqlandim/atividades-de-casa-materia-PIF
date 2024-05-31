#include <stdio.h>


struct ponto{
    int x;
    int y;
};

struct rect{
    struct ponto p1;
    struct ponto p2;
};

struct ponto fazerPonto(int a, int b){//recebe o struct pontos para pegar os pontos da reta
    struct ponto temporario;
    temporario.x = a;
    temporario.y = b;
    return temporario;
}

struct rect FazerRect(struct ponto pt1, struct ponto pt2){//recebe o struct ponto para pegar os pontos do retangulo
    struct rect temporario;
    temporario.p1 = pt1;
    temporario.p2 = pt2;
    return temporario;
}

float area(struct rect retangulo){//recebe o struct rect para poder pegar os valores dos pontos
    int altura,base;
  altura = abs(retangulo.p1.y - retangulo.p2.y);
  base = abs(retangulo.p1.x - retangulo.p2.x);

  return altura*base;
}


int main(void){
    struct ponto pt1;
    struct ponto pt2;
    struct rect retangulo;
    int a,b;

    printf("Digite as coordenadas do primeiro ponto\n");
    scanf("%d %d", &a, &b);

    pt1 = fazerPonto(a,b);//leva os pontos para a função onde vai ser criado
    printf("As coordenadas do seu novo ponto sao (%d,%d)\n",pt1.x,pt1.y);//retorna com os valores ja em x e y

    printf("Digite as coordenadas do seu segundo ponto\n");
    scanf("%d %d", &a, &b);
    pt2 = fazerPonto(a,b);//mesma coisa com o de cima
    printf("As coordenadas do seu novo ponto sao (%d,%d)\n",pt2.x,pt2.y);//mesma coisa

    retangulo = FazerRect(pt1, pt2);//pega os pontos criados e joga na função para cirar um retangulo

    printf("A area do retango e: %f", area(retangulo));//retangulo vai ser pego e criado a area

}