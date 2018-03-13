#include "stdio.h"

int main(void) {
  int sum=0,N,i;
  printf("Enter the nums");
  scanf("%d",&N);
  for(i=1;i<=N;++i)
  {
    printf("%d",i);
    sum=sum+i;
  }
  printf(" \n Sum:%d",sum);
  return 0;
}
