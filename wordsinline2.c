#include<stdio.h>
void main()
{
char s[40];
int i,c=0;
printf("Enter the line");
scanf("%[^\n]",s);
for(i=0;s[i]!='\0';i++)
{
if(s[i]==' ')
{
c++;
}
}
printf("%d",c+1);
}
