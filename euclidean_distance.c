//a simple c program to calculate distance between two points by euclidean formula.


#include<stdio.h>  
#include<.h>  

int main()  
{  
    float x1, y1, x2, y2, distance;  

    printf("Enter point 1 (x1, y1)\n");  
    scanf("%f %f", &x1, &y1);           //this will help us to scan input from the user.  

    printf("Enter point 2 (x2, y2)\n");  
    scanf("%f %f", &x2, &y2);          //this will help us to scan input from the user.     

    distance = sqrt( (x2 - x1)*(x2 - x1) + (y2 - y1)*(y2 - y1) );    //formula to calculate distance known as euclidean distance.

    printf("Distance between (%0.2f, %0.2f) and (%0.2f, %0.2f) is %0.2f\n", x1, y1, x2, y2, distance);  

    return 0;
}
