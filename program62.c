#include<stdio.h>
void  binary(int m)
{
int r[100]={0},i=0;
while(m>0)
{
r[i]=m%2;
m=m/2;
i++;
}
for(;i>=0;i--)
{
printf("%d",r[i]);
}
}
int main()
{int m,bn;
printf("Enter the number :");
scanf("%d",&m);
printf("Binary representation of no : %d is ",m);
binary(m);
return 0;
}
