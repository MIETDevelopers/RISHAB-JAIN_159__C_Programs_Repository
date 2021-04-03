//it isa simple c program to calculate factorial of a number.

#include <stdio.h>
int main() {
    int n, i;
   float fact = 1;
    printf("Enter an integer: ");
    scanf("%d", &n);    //this is the main step of the program as it will take input from the user.

    // Error if the user enters a negative integer as factorial of negative no never exists.
    if (n < 0)
        printf("Error! Factorial of a negative number doesn't exist.");
    else {
        for (i = 1; i <= n; ++i) {
            fact *= i;     //formula to find factorial of a number.
        }
        printf("Factorial of %d = %f", n, fact);
    }

    return 0;
}
