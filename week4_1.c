#include <stdio.h>

void main()
{
  int year;
  int month;
  int day;

  scanf("%d.%d.%d", &year, &month, &day);
  printf("%d.%02d.%02d", year, month, day);

  //codeup#1019
}
