#include<stdio.h>
void main()
{
int n,c=0;
printf("Enter the value:");
scanf("%d",&n);
while(n>0)
{
n=n/10;
c=c+1;
}
printf("%d",c);
}
