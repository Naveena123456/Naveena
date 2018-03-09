#include<stdio.h>
void main()
{
char a[100],i,c1=0,c2=0,c=0;
printf("Enter the string");
scanf("%s",a);
for(i=0;a[i]!='\0';i++)
{
if(a[i]=='a'||a[i]=='e'||a[i]=='i'||a[i]=='o'||a[i]=='u'||a[i]=='A'||a[i]=='E'||a[i]=='I'||a[i]=='O'||a[i]=='U')
{
c1=c++;
}
else
{
c2=c++;
}
}
if(c1>c2)
printf("Yes");
else
printf("No");
}
