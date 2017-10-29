#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,temp,t1,t2;
clrscr();
printf("\n enter the two no decesending order ");
scanf("%d%d",&a,&b);
t1=a;
t2=b;
while(b!=0)
{
temp=a%b;
a=b;
b=temp;
}
if(a==1)
printf("\n the %d and %d is co-prime",t1,t2);
else
printf("\n the %d and %d is not co-prime",t1,t2);
getch();
}
