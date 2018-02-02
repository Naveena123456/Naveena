#include "stdio.h"

int main(void) {
  char a[40],c;
  printf("enter the number");
  scanf("%c",&c);
  if(isdigit(c)==0)
  {
    printf("%c is not numeric");
  }
  else
  {
    printf("%c is numeric");
  }
  return 0;
}
