#include<stdio.h>
#include<conio.h>
int randomm(int);

void main()
{
clrscr();
printf("\n%d",randomm(100));
printf("\n%d",randomm(50));
printf("\n%d",randomm(85));
printf("\n%d",randomm(15));


getch();
}

int randomm(int x)
{
return rand()%x;
}
