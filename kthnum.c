#include<stdio.h>
void main()
{
int N,K,n,a[100];
printf("Enter the value of N and K");
scanf("%d%d",&N,&K);
printf("Values");
for(i=0;a[i]<=N;i++)
{
scanf("%d",&n);
if(a[i]==K)
{
printf("%d",a[i]);
}
}
}
