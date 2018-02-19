#include <stdio.h>
int main()
{
int c=0;
long long m;
printf("Enter the numeric char\n");
scanf("%l2d", &m);
while(m!= 0)
{
m= m/10
m/= 10;
++c;
}
printf("Number of numeric char is%d\n", c);
return 0;
}
