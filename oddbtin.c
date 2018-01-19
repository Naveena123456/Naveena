#include<stdio.h>
void main()
{
int min,max,i;
printf("Enter the min");
scanf("%d",&min);
printf("Enter the max");
scanf("%d",&max);
for(i=min;i<max;i++)
{
if(i%2!=0)
printf("%d",i);
}
}
