#include <stdio.h>
int main() 
{
int b[20];
int j,g;
printf("Enter ten values\n");
for (j= 0; j < 20; j++) {
scanf("%d", &b[j]);
g= b[20];
for(j= 0;j< 10;j++) 
if (b[j]>g) 
g=b[j];
printf("Greatest of ten numbers is %d", g);
return 0;
}
