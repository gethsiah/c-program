#include <stdio.h>
void main()
{
int f1 = 0, f2 = 1, f3, n, c= 0;
printf("Enter the value of no\n");
scanf("%d", &n);
printf("First %d fibonacci numbers are\n", n);
printf("%d\n", f1);
printf("%d\n", f2);
{
c=2;
while(c<n)
f3=f1+f2;
c++;
printf("%d\n",f3);
f1=f2;
f2=f3;
}
return 0;
}
