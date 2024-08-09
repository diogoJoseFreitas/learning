/* Considerando a estrutura: 
struct Ponto { 
  int x; 
int y; 
}; 
para  representar  um  ponto  em  uma  grade  2D,  implemente  um  programa  que 
indique se um ponto p está localizado dentro ou fora de um retângulo. O retângulo 
é definido por seus vértices inferior esquerdo v1 e superior direito v2. Utilize uma 
função que deve imprimir caso o ponto esteja localizado dentro do retângulo ou 
não. */

#include <stdlib.h>

struct Ponto{
    int x;
    int y;
};
typedef struct Ponto ponto;

struct Retangulo{
    ponto p1;
    ponto p2;
};
typedef struct Retangulo retangulo;

void fix_points(retangulo* r){
    int minx, miny, maxx, maxy;
    if (r->p1.x >r->p2.x){
        minx = r->p2.x;
        maxx = r->p1.x;
    }else{
        maxx = r->p2.x;
        minx = r->p1.x;
    };
    if (r->p1.y >r->p2.y){
        miny = r->p2.y;
        maxy = r->p1.y;
    }else{
        maxy = r->p2.y;
        miny = r->p1.y;
    };

    r->p1.x = minx;
    r->p1.y = miny;
    r->p2.x = maxx;
    r->p2.y = maxy;
};

int check_point(retangulo r, ponto p){
    return(p.x >= r.p1.x && p.y >= r.p1.y && p.x <= r.p2.x && p.y <=r.p2.y );
};

void main(){
    retangulo r;
    ponto p;

    printf("Insira as coordenadas do primeiro ponto do retangulo (x, y): ");
    scanf("%d, %d", &r.p1.x, &r.p1.y);
    printf("Insira as coordenadas do segundo ponto do retangulo (x, y): ");
    scanf("%d, %d", &r.p2.x, &r.p2.y);
    printf("Insira as coordenadas do ponto de teste (x, y): ");
    scanf("%d, %d", &p.x, &p.y);

    fix_points(&r);

    printf("Resultado eh: %d\n\n", check_point(r, p));
    


};
