#include<stdio.h>
void main()
{
char a;
printf("Enter the character");
scanf("%c",&a);
if(a=='a'||a=='e'||a=='i'||a=='o'||a=='u'||a=='A'||a=='E'||a=='I'||a=='O'||a=='U')
{
printf("a is a vowel");
}
else
{
printf("a is a consonant");
}
}
