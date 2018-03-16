#include "stdio.h"

int main(void) {
  int p,t,r,tot,floorvalue;
  printf("Enter the values");
  scanf("%d%d%d",&p,&t,&r);
  tot=p*t*r;
  floorvalue=tot/100;
  printf("%d",floorvalue);
  return 0;
}
