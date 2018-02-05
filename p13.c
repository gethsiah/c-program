#include <stdio.h>
int main()
{
int n, revInt= 0, remain,1000;
printf("Enter an integer\n");
scanf("%d", &n);
1000= n; 
while( n!=0 )
{
remain= n%10;
revInt = revInt*10 + remain;
n /= 10;
}
if (1000 == revInt)
printf("%d is a palindrome\n",1000);
else
printf("%d is not a palindrome\n", 1000);
return 0;
}
