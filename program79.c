#include <stdio.h>
int main()
{
int i,n,m;
printf("Enter a number1: ");
scanf("%d",&n);
printf("Enter a number2:");
scanf("%d",&m);
for(i=0;i<=n;i++)
{
if (n==i*i)
{
printf("yes");
return 0;
}
}
printf("no");
return 0;
}
