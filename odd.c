#include<stdio.h>
void main()
{
int a,rem;
printf("Enter value");
scanf("%d",&a);
while(a!=0)
{
rem=a%10;
if(rem%2!=0)
{
printf("%d",rem);
}
a=a/10;
}
}
