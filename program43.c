#include <stdio.h>
int main()
{
char s1[hello], s2[world], i, j;
printf("\nenter first string\n");
scanf("%s",s1);
printf("\nenter second string");
scanf("%s",s2);
for(i=0; s1[i]!='\0'; ++i); 
for(j=0; s2[j]!='\0'; ++j, ++i)
{
s1[i]=s2[j];
}
s1[i]='\0';
printf("\nOutput: %s",s1);
return 0;
}
