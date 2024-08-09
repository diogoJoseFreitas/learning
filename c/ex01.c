#include <stdio.h>
//Faça um programa que leia dois números inteiros, positivos, e determine o produto 
//deles, utilizando o seguinte método de multiplicação: 
//• Dividir, sucessivamente, o primeiro número por 2, até que se obtenha 1 como 
//quociente; 
//• Paralelamente, dobrar, sucessivamente, o segundo número; 
//• Somar  os  números  da  segunda  coluna  que  tenham  um  número  ímpar  na 
//primeira coluna. O total obtido é o produto procurado.

int calculo_estranho(int a, int b){
    int contagem = a;
    int somatoria = 0;
    while(contagem >= 1){
        printf("%d | %d ", contagem, b);
        if(contagem%2){
            somatoria += b;
            printf("-> %d\n", somatoria);

        }else{
            printf("\n");
        };
        b*=2;
        contagem /= 2;
    };
    return(somatoria);
};

int main(){
    int val1, val2, resultado;
    printf("Insira os valores seguindo o seguinte padrão: numermoxnumero\n");
    scanf("%dx%d", &val1, &val2);
    resultado = calculo_estranho(val1, val2);
    printf("O Resultado final é de: %d\n", resultado);
    return(0);
};