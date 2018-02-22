#include<stdio.h>
void main()
{
int i,n,sum=0,avg,a;
printf("Enter the nums");
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",&a);
sum=sum+a;
}
avg=sum/n;
printf("%d",avg);
  
}
 
