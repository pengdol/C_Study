#include <stdio.h>

void main()
{
  int num1;
  int num2;
  int num3;
  int pplus;
  float average;
  
  scanf("%d %d %d", &num1, &num2, &num3);
  
  pplus = num1 + num2 + num3;
  average = (num1 + num2 + num3) / 3;
  
  printf("%d \n%.2f", pplus, average);
  
  //codeup #1046
}
