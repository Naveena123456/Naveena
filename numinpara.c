#include<stdio.h>
void main()
{
char a[40];
int i,c=0;
printf("Enter the paragraph");
scanf("%s",a);
for(i=0;a[i]!='\0';i++)
{
if(0<=a[i]<=9)
{
c++;
}
}
printf("%d",c);
}
