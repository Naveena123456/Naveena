#include<stdio.h>
void main()
{
int i,num,c=0;
printf("Enter the number");
scanf("%d",&num);
for(i=1;i<=num;i++)
{
if(num%i==0)
c++;
}
if(c==2)
printf("The number is prime");
else
printf("The number is not a prime");
}
