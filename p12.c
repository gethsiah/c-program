#include <stdio.h>
int main()
{
int x, y;
long long res= 1;
printf("Enter a x number\n");
scanf("%d", &x);
printf("Enter an y\n");
scanf("%d", &y);
while (y!= 0)
{
res*= x;
--y;
}
printf("Ans=%lld",res);
return 0;
}
