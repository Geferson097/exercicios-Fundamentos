#include<stdio.h>
#include<stdlib.h>

int main(void)
{
    int faltas,aulas;
    float aux;
    printf("Informe as aulas dadas e a frequencia:\n");
    scanf("%d %d",&aulas,&faltas);
    aux=(100*(aulas-faltas)/aulas);
    printf("%.3f",aux);

}
