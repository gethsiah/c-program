#include<stdio.h> 
int main()
{
int n,rem,digit;
printf("Enter an integer number:");
scanf("%d",&n);
printf("\n The Odd digits present in %d are \n",n);
while(n>0)
{
digit=n% 10;
n=n/ 10;
rem= digit% 2;
if(rem !=0)
printf("\n  %d.",digit);
}
return 0; 
} 

 
