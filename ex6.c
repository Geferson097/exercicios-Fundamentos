#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int ano;
    printf("Informe um ano:");
    scanf("%d",&ano);
    if(ano>0)
    {
        if((ano-2008)/12)printf("Ano do rato");
        else if((ano-2009)/12)printf("Ano do boi");
        else if((ano-2010)/12)printf("Ano do Tigre");
        else if((ano-2012)/12)printf("Ano do Lebre");
        else if((ano-2012)/12)printf("Ano do Dragão");
        else if((ano-2013)/12)printf("Ano do Serpente");
        else if((ano-2014)/12)printf("Ano do Cavalo");
        else if((ano-2015)/12)printf("Ano do Carneiro");
        else if((ano-2016)/12)printf("Ano do Macaco");
        else if((ano-2017)/12)printf("Ano do Galo");
        else if((ano-2018)/12)printf("Ano do Cao");
        else printf("Ano do Porco");

    }
    else printf("Ano invalido.");
}
