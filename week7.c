#include <stdio.h>

/*void main()
{
  int big = 5730;
  int small = 5730;
  printf("%d", big-small);
}*/

/*void main()
{
  int x = 100;
  printf("%d\n", ((x+10+10+10)/2/2)-5-5);

  int a = 50;
  printf("%d", ((a*10+10)*10-5-5)/2);
}*/

/*void main()
{
  int a;
  scanf("%d", &a);
  printf("%d분 %d초",  a / 60, a % 60);
}*/

/*void main()
{
  int w;
  float h;
  scanf("%d %f", &w, &h);
  w = w - 5; h = h + 0.1;
  printf("키: %0.2fm, 몸무게: %dkg, 체질량 지수: %f", h, w, w/h*h);
}*/

/*void main()
{
  int n = 0;
  printf("%d\n", n);
  printf("%d\n", n += 3);
  printf("%d\n", n *= 0);
  printf("%d\n", n += 5);
  printf("%d\n", n++);
  printf("%d\n", ++n);
  printf("%d\n", n % 5);
  printf("%d\n", --n);
  printf("%d\n", n--);
  printf("%d\n", n);
}*/

/*void main()
{
  int x;
  scanf("%d", &x);
  if(x % 2 == 0 && x % 3 == 0)
    printf("공배수 O\n");
  else
    printf("공배수 X\n");

  int y;
  scanf("%d", &y);
  if(12 % y == 0 && 30 % y == 0)
    printf("공약수 O\n");
  else
    printf("공약수 X\n");
}*/

/*void main()
{
  float a, b, c;
  scanf("%f %f %f", &a, &b, &c);
  if(a>b && a>c)
  {
    if(b>c)
      printf("%f %f %f", a, b, c);
    else
      printf("%f %f %f", a, c, b);
  }
  else if(b>a && b>c)
  {
    if(a>c)
      printf("%f %f %f", b, a, c);
    else
      printf("%f %f %f", b, c, a);
  }
  else
  {
    if(a>b)
      printf("%f %f, %f", c, a, b);
    else
      printf("%f %f %f", c, b, a);
  }
}*/
/*void main()
{
  int n;

  for (n=30; n > 20; n--)
    {
      printf("n = %d\n", n); 
    }

  printf("마지막 n = %d\n", n);
}*/

/*void main()
{
  int n;

  for (n=-10; n <= -1; n++)
    {
      printf("n = %d\n", n); 
    }

  printf("마지막 n = %d\n", n);
}*/
