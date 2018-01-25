#include<stdio.h>
void main()
{
int i,k,sum=0,a[50],n;
printf("enter the values");
scanf("%d %d",&n,&k);
for(i=0;i<n;i++)
{

scanf("%d",&a[i]);
}
for(i=0;i<k;i++)
{
sum=sum+a[i];
}
printf("%d",sum);
}
