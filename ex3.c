#include<stdio.h>
#include<stdlib.h>

int main(void)
{
    int ano;
    printf("Informe um ano:\n");
    scanf("%d",&ano);
    if(ano>=1930)
    {
        if((ano-1930)/4)printf("nesse ano houve/havera copa");
        else printf("Nesse ano nao houve/havera copa.\n");


    }
    else printf("Nao houve copa - a primeira copa foi em 1930.\n");

}
