// O  fatorial de  um número  inteiro positivo n  é  definido  como  sendo o  produto dos 
// inteiros  de  1  a  n.  O  fatorial  de  zero  é  definido  como  1.  Faça  um  programa  que 
// contenha uma função que receba um inteiro como parâmetro e retorne seu fatorial.

#include <stdio.h>

int factorial(int a){
    int resultado = 1;
    while(a>0){
        resultado *= a;
        a--;
    };
    return(resultado);
};

void main(){
    int a;
    printf("Informe um número natural: ");
    scanf("%d", &a);
    printf("O Fatorial de %d é %d\n\n", a, factorial(a));
};