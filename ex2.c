#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void)
{
    int a,c;
    float b;
    printf("Digite um Numero Inteiro: \n");
    scanf("%d",&a);
    b=sqrt(a);
    c=b;
    if(b<=c) printf("O Numero Digitado eh um Quadrado Perfeito");


    else printf("Nao eh um Quadrado Perfeito\n");
}
