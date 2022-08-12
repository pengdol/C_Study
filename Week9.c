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

void main()
{
  int i = 10;

  while(1)
  {
    printf("뭐 ");
    --i;
  }
}
