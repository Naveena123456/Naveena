#include<stdio.h>
void main()
{
int n,fib1=0,fib2=1,fib3,c=0;
printf("Enter the num");
scanf("%d",&n);
printf("The fibonacci series is %d %d",fib1,fib2);
c=2;
while(c<n)
{
fib3=fib1+fib2;
c++;
printf("%d",fib3);
fib1=fib2;
fib2=fib3;
}
}
