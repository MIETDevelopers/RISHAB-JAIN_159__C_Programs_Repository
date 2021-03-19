//C Program to find Sum of N Numbers using For Loop.

#include<stdio.h>
int main()
{
  int Number, i, Sum = 0;
  
  printf("\nPlease Enter any Integer Value\n");
  scanf("%d", &Number);                         //will scan the input numbers.
  
  for(i = 1; i <= Number; i++)       //usage of for loop.
  {
     Sum = Sum + i;
  }
  
  printf("Sum of Natural Numbers = %d", Sum);     //your sum will be printed.
  return 0;
}