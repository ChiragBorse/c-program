#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
int z;
char string1[10];
char string2[20];
clrscr();
printf ("enter the string:-");
scanf("%s%s",string1,string2);
z=strcmp (string1,string2);
if(z==0)
{
printf("equal");
}
else
{
printf("not equal");
}

//printf("%s%s",string1,string2);
getch();
}