#include<stdio.h>
void main()
{
int n,rem;
printf("Enter the value");
scanf("%d",&n);
while(n>0)
{
rem=n%10;
printf("%d",rem);
n=n/10;
}
}
