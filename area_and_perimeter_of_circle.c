//it is simple c program to calculate area and perimeter of a cirlce.

#include <stdio.h> 
int main() {
   int radius;
   float area, perimeter;    
   radius = 6;

   perimeter = 2*3.14*radius;   //formula for perimeter of cirlce.
   printf("Perimeter of the Circle = %f inches\n", perimeter);
	
	area = 3.14*radius*radius;    //formula for area of circle.
	printf("Area of the Circle = %f square inches\n", area);

return(0);
}
