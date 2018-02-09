#include<stdio.h>
int main()
{
int hr, min, total_min;
printf("\nEnter the Time in Minutes\n");
printf("\nhours\t");
scanf("%d", &hours);
printf("\nMinutes:\t");
scanf("%d", &minutes);
total_min= (hrs * 60) + min;
printf("\nTotal Time in Minutes\t%d\n", total_min);
return 0;
}
