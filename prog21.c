#include <stdio.h>
#include <math.h>
int main()
{
int N,A,D,i,tn,sum=0;
printf("Enter the fir term value\n%d",A);
printf("Enter the total numbs\n%d",N);
printf("Enter the common difference\n%d",D);
sum=(n*(2*A+(N- 1)* D))/ 2;
tn=a+(N-1)*D;
printf("Sum of the series is\n");
for(i=A;i<=tn;i=i+D)
if(i!=tn)
printf("%d+",i);
else
printf("%d=%d",i,sum);
return 0;
}
