#include<stdio.h>
int getnum();    
int main()
{
int i= 0;
i = getnum();
while (!((i<=10) && (i>= 1))) 
printf("[error] The number is out of range");
i=getnum();
printf("The number  is %d", i);
return 0;
}      
int getnum() 
{    
int num;
printf("Enter a number between 1 to 10");
scanf("%d", &num);
return(num);
getch();
}
