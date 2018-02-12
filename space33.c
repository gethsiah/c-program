#include<stdio.h>
#include <stdio.h>
int main()
{
char b[50];
int i, spac;
printf("enter the string\n");
scanf("%s", b);
for(i=0 ; b[0]!="\0" ; i++
{
if (b[i]=' ')
{
spac++;
}
}
printf("Number of spaces is %d", spac);
return 0;
}
