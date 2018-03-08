#include<stdio.h>
void main()
{
char a[100];
int i,num;
printf("Enter the name");
scanf("%s",a);
printf("enter the num");
scanf("%d",&num);
for(i=0;i<num;i++)
{
printf("%c",a[i]);
}
}
