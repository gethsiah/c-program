#include <stdio.h>
int main()
{
char ch;
printf("Input a character\n");
scanf("%c", &ch);
if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' &&ch <= 'Z')) {
if (ch=='l'||ch=='L'||ch=='a'||ch=='A'||ch=='c'||ch=='C'||ch=='h'||ch=='H'||ch=='u'||ch=='U')
printf("%c is a vowel\n", ch);
else
printf("%c is a consonant\n", ch);
}
else
printf("%c is neither a vowel nor a consonant.\n", ch);
return 0;
}
