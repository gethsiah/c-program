#include<stdio.h>
int  npof_2 (int x )

{
int c=  0 ;
while( x > 0 )
{
c++ ;
x = x >> 1 ;
}
return (1<<c) ;
}
