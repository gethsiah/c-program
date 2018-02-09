#include<stdio.h>
void isnumeric(char str[])
{
int l=0;
int h = strlen(str) - 1;
while (h > l)
if (str[l++] != str[h--])
printf("%s it is not numeric", str);
return;
printf("%s it is numeric", str);
getch();
}
