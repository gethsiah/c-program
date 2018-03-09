#include <stdio.h>
#include <string.h>
int main()
{
char s[10];
int i,l;
int f= 0;
printf("Enter a string\n:");
scanf("%s", s);
l= strlen(s);
for(i=0;i<l;i++)
{
if(s[i] != s[l-i-1])
{
f= 1;
break;
}
}
if (f) 
{
printf("%s is not a palindrome\n", s);
}    
else {
printf("%s is a palindrome", s);
}
return 0;
}
