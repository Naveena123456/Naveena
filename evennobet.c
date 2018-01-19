#include<stdio.h>
void main()
{
int max,min,i;
printf("Enter the min value");
scanf("%d",&min);
printf("Enter the max value");
scanf("%d",&max);
for(i=min;i<max;i++)
{
if(i%2==0)
printf("%d",i);
}
}
