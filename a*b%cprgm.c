#include<stdio.h>
void main()
{
int a,b,c,ans;
printf("Enter the values");
scanf("%d%d%d",&a,&b,&c);
ans=a*b%c;
printf("%d",ans);
}
