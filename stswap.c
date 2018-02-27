#include<stdio.h>
void main()
{
int s,t,temp;
printf("Enter nums:");
scanf("%d %d",&s,&t);
temp=s;
s=t;
t=temp;
printf("%d %d",s,t);
}
