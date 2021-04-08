// A simple C Program to  whether the entered number is Odd or Even.
#include <stdio.h>
int main() {
    int num;
    printf("Enter an integer: ");
    scanf("%d", &num); //It will scan the values entered by the user 
    if(num % 2 == 0)                                                    // using if else case here because ease of accessibility
        printf("%d is even.", num);
    else
        printf("%d is odd.", num);
    return 0;
}
