#include<stdio.h>
void main()
{
int n,f1=0,f2=1,f3,c=0;
printf("Enter the num");
scanf("%d",&n);
printf("The fibonacci series is %d %d",f1,f2);
c=2;
while(c<n)
{
f3=f1+f2;
c++;
printf("%d",f3);
f1=f2;
f2=f3;
}
}
