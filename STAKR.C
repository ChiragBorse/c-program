#include<stdio.h>
#include<conio.h>
#include<process.h>
int st[10]={0};
int top=-1;

void push(int);
void pop();
void disp();
void main()
{
int val;
{
int ch,p;
do
{
clrscr();
printf(" press 1 for push \n");
printf(" press 2 for pop \n");
printf(" press 3 for disp \n");
printf(" press 4 for main \n");
scanf("%d",&ch);

    switch(ch)
    {
case 1 :
    printf("input the number");
    scanf("%d",&p);
    push(p);
    break;
case 2:
    pop();
    break;
case 3: disp();
    break;
case 4:
    exit(0);
    default:printf("default case");
    break;
    }
    getch();
    }while(1);
}
void push(int value)
{
if(top==9)
{
printf("over flow");
}
else{
    top=1+top;
    st[top]=value;
}
}
void pop()
{
if (top==-1)
    printf("underflow");

  else
{
 printf("%d",st[top]);
 top--;
 }
}

void disp()
{
int i;
for(i=top;i>=0;i--)
{
printf("\n%d",st[i]);
}