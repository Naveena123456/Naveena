#include<stdio.h>
void main()
{
int x,y,temp;
printf("Enter nums:");
scanf("%d %d",&x,&y);
temp=x;
x=y;
y=temp;
printf("%d %d",x,y);
}
