#include <stdio.h>

void main()
{
  int a;
  scanf("%d", &a);
  switch(a % 3)
  {
    case 0:
      printf("3의 배수");
      break;
    default:
      printf("아님");
      break;
  }
}
