#include <stdio.h>
int main()
{
int a, b, minMultiple;
printf("Enter two positive integers\n");
scanf("%d %d", &a, &b);
minMultiple = (a>b) ? a : b;
while(1)
{
if( minMultiple%a==0 && minMultiple%b==0 )
{
printf("The LCM of %d and %d is %d.", a, b,minMultiple);
break;
}
++minMultiple;
}
return 0;
}
