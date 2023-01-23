#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int i,j;
printf("enter in trmperature in celsius");
scanf("%d",&i);
i=j*9/5+32;
printf("the temperature in fahrenheit %d",j);

if (i>108)
{
printf("temperature is high");
}
if (i>90)
{
printf("temperature is medium");
}
if (i<85)
{
printf("temperature is low");
}

getch();
}
