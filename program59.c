#include <stdio.h>
int main() 
{
int a[50];
int i,g;
printf("Enter 10 values\n");
for (i= 0; i < 20; i++)
{
scanf("%d", &a[i]);
g= a[20];
for(i= 0;i< 10;i++) 
if (a[i]>g) 
g=a[i];
printf("Greatest of ten numbers is %d", g);
}
return 0;
}
