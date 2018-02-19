#include <stdio.h>
int main()
{
int n=44;
int m=88;
printf("the value of n=%d m=%d before swapping", n, m);
n = n^ m;
m = n^m;
n = n^m;
printf("the value of n=%d m=%d after swapping", n, m);
return 0;
}
