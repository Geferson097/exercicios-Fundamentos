#include<stdio.h>
#include<stdlib.h>

int main(void)
{
    int aux2,dig=0;
    int num,aux,invertido=0;
    printf("Informe um numero de 4 digitos:\n");
    scanf("%d",&num);
    aux2=num;
    if(aux2==0)dig++;
    else
    {
        while(aux2!=0)
        {
            dig++;
            aux2=aux2/10;
        }
    }
    if(dig>=4)
    {
        aux=num;
        while(aux>0)
        {
            invertido=(invertido*10)+(aux%10);
            aux=aux/10;
        }
        if(num==invertido)printf("Eh palindromo; \n");
        else printf("nao eh palindormo. \n");
    }
    else printf("Numero invalido.\n");
}

