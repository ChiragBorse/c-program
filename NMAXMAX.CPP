#include<stdio.h>
#include<conio.h>

void main()
{
int max=90,nmax=60,i,A[10]={1,2,3,4,5,6,7,8,9,10};
clrscr();

printf("enter the number");
for(i=0;i<=9;i++)
{
if (A[i]>max)
{   max=A[i];
 }
}
if (max<nmax)
   nmax=max;

printf("%d%d\n",nmax,max);

getch();
}