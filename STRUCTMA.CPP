#include<stdio.h>
#include<conio.h>

struct ndt{
int roll;
char name[20];
int marks;
};
typedef struct ndt student;
main()
{
clrscr();
student st1[10];
int i;
for(i=0;i<3;i++)
{
printf("enter roll no");
scanf("%d",&st1[i].roll);
printf("enter name");
scanf("%s",&st1[i].name);
printf("enter marks");
scanf("%d",&st1[i].marks);
}
for(i=0;i<3;i++)
{
 printf("roll no : %d name : %s marks : %d \n",st1[i].roll,st1[i].name,st1[i].marks);
}
int max,j;
for(int i=0;i<3;i++)
{
if(max<st1[i].marks)
{
max=st1[i]marks;
j=i;
}
printf("%s",st1[j].name);
}
getch();
}
