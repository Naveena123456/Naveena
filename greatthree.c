#include<stdio.h>
void main()
{
int a,b,c;
printf("Enter the numbers");
scanf("%d %d %d",&a,&b,&c);
if(a>b&&a>c)
{
printf("a is greater");
}
else if(b>c)
{
printf("b is greater");
}
else
{
printf("c is greater");
}
}
