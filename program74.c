#include <stdio.h>
int main()
{
float num = 2.6;
int n=(int)(num<0?(num-2.6):(num+2.6));
printf("%d\n", n);
}
