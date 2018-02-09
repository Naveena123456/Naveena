#include<stdio.h>
void main()
{
char a[30],b[30];int i,temp=0;
printf("Enter the strings");
scanf("%s %s",&a,&b);
for(i=1;a[i]!='\0';i++)
{
if(a[i]==b[i])
temp=1;
else
temp=0;
}
if(temp==1)
printf("The strings are %s %s",a[i]);
else
printf("The greater string is %s",a[i]);
}
