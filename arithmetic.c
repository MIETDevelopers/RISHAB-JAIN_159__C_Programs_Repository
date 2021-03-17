/* 
Write a C program to enter two numbers and perform all arithmetic operations. 
*/ 
#include <stdio.h>
#include <math.h>

int main() {
  double first_number, second_number;
  double addition, subtraction, multiplication, division, modulus;
 
/* Two numbers input from user */
  printf("Enter the First Numbers to Perform Arithmetic Operations: ");
  scanf("%lf", & first_number);
  printf("Enter the Second Numbers to Perform Arithmetic Operations: ");
  scanf("%lf", & second_number); 

/* Performing an arithmetic operations(addition, subtraction, * multiplication, division, and modulus) */

  addition = first_number + second_number;
  subtraction = first_number - second_number;
  multiplication = first_number * second_number;
  division = first_number / second_number;
  modulus = fmod(first_number, second_number);

/* Printing the result of all arithmetic operations */

  printf("\n\nSum of Two Numbers are = \t\t%lf\n", addition);
  printf("Differences of Two Numbers are = \t%lf\n", subtraction);
  printf("Multiplication of Two Numbers are = \t%lf\n", multiplication);
  printf("Quotients of Two Numbers are = \t\t%lf\n", division);
  printf("Modulus of Two Numbers are = \t\t%lf\n\n", modulus);
  return 0;
}