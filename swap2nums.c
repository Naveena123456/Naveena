#include<stdio.h>
void main()
{
int a,b,t;
printf("Enter the numbers");
scanf("%d %d",&a,&b);
t=a;
a=b;
b=t;
printf("The swapped numbers are %d %d:",a,b);
}
