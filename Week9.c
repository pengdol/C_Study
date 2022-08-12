#include <stdio.h>

void main()
{
  int x = 15;
  int i;
  int y = 1;
  
  for(i = 1; i <= 100; i++)
  {
    x -= 4; x+= 3;
    y += 1;
    if(x==1)
    {
      break;
    }
  }
  printf("%d일", y);
}
