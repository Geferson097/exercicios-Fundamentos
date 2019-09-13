#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(void)
{
    int hora,min,sec;
    int hora1,min1,sec1;
    int totalh,totalm,totals;
    printf("Informe o primeiro horario no formato (HH:MM:SS):");
    scanf("%d %d %d",&hora,&min,&sec);
    printf("Informe o segundo horario no formato (HH:MM:SS):");
    scanf("%d %d %d",&hora1,&min1,&sec1);
    if(hora>hora1)totalh=(hora-hora1)-24;
    else totalh=(hora1-hora)-24;
    if(min>min1) totalm=(min-min1);
    else totalm=(min1-min);
    if(sec>sec1) totals=(sec-sec1);
    else totals=(sec1-sec);

    printf("%d:%d:%d",abs(totalh),totalm,totals);
}
