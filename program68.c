#include<stdio.h>
int main()
{
int n;
printf("enter an integer\n");
scanf("%d",&n);
n=n + (7- n % 7);
printf("the nearest great mul of 10 is%d\n",n);
return 0;
}
