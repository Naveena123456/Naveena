#include<stdio.h>
void main()
{
int n,s[15],i,j,t;
printf("The number of values");
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",&s[i]);
}
for(i=0;i<n;i++)
{
for(j=0;j<n;j++)
{
if(s[i]>s[j])
{
t=s[i];
s[i]=s[j];
s[j]=t;
}
}
}
printf("%d",s[0]);
}
