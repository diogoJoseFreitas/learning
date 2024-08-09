// Faça  um  programa  que  possua  uma  função  que  receba  dois  valores  x1  e  x2 
// passados por referência. Em seguida, troque os valores das variáveis na função e 
// os imprima trocados no programa principal.

#include <stdio.h>

void memSwitch(int* x1, int* x2){
    int guard = *x1;
    *x1=*x2;
    *x2=guard;

}

void main(){
    int val1, val2;
    printf("Insira os dois valores desejados separados por espaco: ");
    scanf("%d %d", &val1, &val2);

    memSwitch(&val1, &val2);

    printf("val1: %d | val2: %d\n\n", val1, val2);
}