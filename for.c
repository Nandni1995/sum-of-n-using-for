#include<stdio.h>
#include<conio.h>
void main()
{
int n,i,sum=0;
clrscr();
printf("enter the number:");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
printf("%d ",i);
sum=sum+i;
}
printf("sum=%d",sum);
getch();
}
