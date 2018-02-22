#include<stdio.h>
void main()
{
int a[20],i,n,j,temp;
printf("Enter the nums");
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
for(j=0;j<n;j++)
{
if(a[i]>a[j])
{
temp=a[i];
a[i]=a[j];
a[j]=temp;
}
}
}
printf("The max element is:%d",a[0]);
printf("\n The min element is:%d",a[n-1]);

} 
