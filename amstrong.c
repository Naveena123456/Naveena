#include<stdio.h>
void main()
{
int num,sum=0,rem=0,t;
printf("Enter the num");
scanf("%d",&num);
t=num;
while(t!=0)
{
rem=t%10;
sum=sum+(rem*rem*rem);
t=t/10;
}
if(sum==num)
printf("The num is amstrong %d",num);
else
printf("The num is not an amstrong %d",num);
}
