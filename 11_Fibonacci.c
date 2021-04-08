// a simple c program to print fibonacci series




#include<stdio.h>
 
int main(){
   int n, first = 0, second = 1, next, c; // recommeneded initials for the formula
 
   printf("Enter the number of terms\n");
   scanf("%d",&n); //This will scan the total number of terms that are to be printed 
 
   printf("First %d terms of Fibonacci series are :-\n",n);
 
   for ( c = 0 ; c < n ; c++ ) //ForLoop function for the reference to the formula of the series.
   {
      if ( c <= 1 )
         next = c;
      else
      {
         //Formula to print the series.
         next = first + second;
         first = second;
         second = next;
      }
      printf("%d\n",next); //This will give the outpu.
   }
   return 0;
}
