#include<stdio.h>
int main()
{
int a=0,b=1,c,n,i;
printf("enter an number n");
scanf("%d",&n);
for(i=0;i<=n;i++)
{
c=a+b;
printf("fibonacci series is",c);
a=b;
b=c;
}
return 0;
}
