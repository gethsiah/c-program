#include <stdio.h>
#include <string.h>
void main()
{
int n,c=0;
char str[100];
printf("enter the string\n");
scanf("%[^\n]s", str);
for (n= 0;str[n] != '\0';n++)
{
if (s[n] == ' ')
c++;    
}
printf("count the words%d\n", c+1);
}
