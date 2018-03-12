#include <stdio.h>
int main()
{
int low, high, i, f;
printf("Enter two numbers of interval: ");
scanf("%d %d", &low, &high);
printf("two numbers between %d and %d are: ", low, high);
while (low < high)
{
f=0;
for(i=2;i<=low/2; ++i)
{
if(low%i==0)
{
f=1;
break;
}
}
if (f==0)
printf("%d ", low);
++low;
}
printf("yes%d");
else
printf("no%d");
return 0;
}
