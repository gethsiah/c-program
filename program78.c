# include <stdio.h> 
# include <conio.h>
void main() 
{ 
int i,n,m; 
clrscr() ; 
printf("Enter the number"); 
scanf("%d", &n); 
printf("\nEnter the number:") ; 
scanf("%d", &m); 
if(i*m==0)
printf("\nThe numbers multiple 13 %d are :\n\n",m); 
for(i=1;i<=n;i++)  
printf("%d\t",i) ; 
getch() ; 
}

