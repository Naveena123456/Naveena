#include "stdio.h"

int main(void) {
  int sum=0,N,i,n;
  printf("Enter the nums");
  scanf("%d",&N);
   printf("Numbers");
   scanf("%d",&n);
  for(i=1;i<=N;++i)
  {
    sum=sum+i;
  }
  printf(" \n Sum:%d",sum);
  return 0;
}
