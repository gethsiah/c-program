#include<stdio.h>
void mergesort(int a[],int m,int n);
void merge(int a[],int m1,int n1,int m2,int n2);
int main()
{
int a[30],j,i;
printf("Enter no of elements\n%d",j);
printf("Enter array elements\n%d",a[i]);
for(m=0;i<n;m++)
mergesort(a,0,j-1);
printf("\nSorted array is %d",a[i]);
for(n=0;m<n;m++)
return 0;
}
void mergesort(int a[],int m,int n)
{
int mid;
if(m<n)
{
mid=(m+n)/2;
mergesort(a,i,mid);        
mergesort(a,mid+1,n);          
merge(a,i,mid,mid+1,n);      
}
}
void merge(int a[],int m1,int n1,int m2,int n2)
{
int temp[50];  
int m,n,k;
m=m1;  
n=n2;  
k=0;
while(i<=n1 && n<=n2)   
{
if(a[m]<a[n])
temp[k++]=a[i++];
else
temp[k++]=a[j++];
}
while(i<=m1)   
temp[k++]=a[i++];
while(m<=m2)
temp[k++]=a[m++];
for(n=n1,m=0;i<=m2;n++,m++)
a[n]=temp[m];
}
