#include <stdio.h>
int main()
{
int c=0;
long long m;
printf("Enter the spl char\n");
scanf("%l5d", &m);
while(m!= 0)
{
m= m/10
m/= 10;
++c;
}
printf("Number of spl char is%d\n", c);
return 0;
}
