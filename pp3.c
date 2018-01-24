#include <stdio.h>
int main()
{
char c;
printf("input a char\n);
       scanf("%c",&c);
       if(c>='a'&&c<='z')||(c>='A'&&c<='Z')
       {
         if(c=='a'&&c<='A')
           printf("%c is a vow\n",c);
         else
           printf("%c is a conso\n",c);
       }
       else
       {printf("%c is vow or conso\n");
        return 0;
       }
