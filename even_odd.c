//to check whether a number is even or odd.
// i have used if else case here but there are many ways to do this 


#include <stdio.h>

int main() {
   int even = 24;             //these are the input from the user.
   int odd  = 31;
   
   if (even % 2 == 0)
      printf("%d is even\n", even);

   if (odd % 2 != 0 )
      printf("%d is odd\n", odd);

   return 0;
}
