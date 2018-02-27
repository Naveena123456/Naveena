#include<stdio.h>
void main()
{
int s,t;
printf("Enter the numbers");
scanf("%d %d",&s,&t);
s=s^t;
t=s^t;
s=s^t;
printf("After swapping %d %d",s,t);
}
