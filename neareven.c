#include<stdio.h>
void main()
{
int n;
printf("Enter the num");
scanf("%d",&n);
if(n%2==0)
printf("%d",n);
else
printf("The nearest even number is:%d",n-1);
}
