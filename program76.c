#include <stdio.h>

int main()
{
int n, c;
printf("Enter the positive integer to check  composite\n");
scanf("%d",&n);
for(c = 2; c<= n/2; c++)
{
if( (n% c) == 0)
{
break;
}
printf("%d is a composite number",n);
}
return 0;
}

