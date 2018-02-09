#include<stdio.h>
void main()
{
char a[40];
int i,c=0;
printf("Enter the line");
scanf("%s",a);
for(i=0;a[i]!='\0';i++)
{
if('a'<=a[i]<='z')
{
c++;
}
}
printf("The number of words are:%d",c);
}
