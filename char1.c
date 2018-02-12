#include <stdio.h>
#define size 200 
int main()
{
char str[size];
int alphabets,c;
alphabets =  c = 0;
printf("Enter the string ");
gets(str);
while(str[c]!='\0')
{
if((str[c]>='a' && strc<='z') || (str[c]>='A' && str[c]<='Z'))
{
alphabets++;
}
i++;
}
printf("Alphabets = %d\n", alphabets);
printf("Special characters = %d",character );
return 0;
}
