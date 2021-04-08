//A simple C Program to calculate distance between two points.
#include<stdio.h> //Including Standard input & output header file 
#include<.h>  //Including maths header file 
  
int main()  
{  
    float x1, y1, x2, y2, distance; //Declaring variables that are to be used in the formula
  
    printf("Enter point 1 (x1, y1)\n");  
    scanf("%f %f", &x1, &y1);  //Scanning coordinates for first point as provider will provide it
  
    printf("Enter point 2 (x2, y2)\n");  
    scanf("%f %f", &x2, &y2);  //Scanning coordinates for second point as provider will provide it
  
    distance = sqrt( (x2 - x1)*(x2 - x1) + (y2 - y1)*(y2 - y1) ); //Euclidean Distance's formula. 
  
    printf("Distance between (%0.2f, %0.2f) and (%0.2f, %0.2f) is %0.2f\n", x1, y1, x2, y2, distance); //Displaying calculated answer. 
  
    return 0;
}
