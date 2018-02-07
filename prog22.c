#include <stdio.h>
int main()
{
int max=0,sum=0,n=0;
int num[3];
for(n=0;n<3;n++)
printf("Enter the num%d\n%d",num[n],(n+1));
for(n=0;n<3;n++)
sum=sum+num[n];
max=sum/3;
printf("maximum of number is \n%d",max);
return 0;
}
