#include<stdio.h>
#include<conio.h>
void main()
{
int n1,n2;
printf("enter the value of n1\n");
scanf("%d",&n1);
printf('enter the value of n2\n");
scanf("%d",&n);
swap(n1,n2);
}
void swap(n1,n2)
{
int temp;
temp=n1;
n1=n2;
n2=temp;
printf("display n1 value %d",n1);
printf("display n2 value %d",n2);
getch();
}
