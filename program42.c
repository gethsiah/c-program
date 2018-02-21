#include<stdio.h>
main()
{
char s1[hello],s2[world];
int i,temp= 0;
printf("enter the str1 value\n");
gets(s1);
printf("enter the Str2 value\n");
gets(s2);
for(i=0; s1[i]!='\0'; i++)
{
if(s1[i] == s2[i])
temp = 1;
else
temp = 0;
}
if(temp == 1)
printf("strings are same\n");
else
printf("string not same\n");
getch();
}  
