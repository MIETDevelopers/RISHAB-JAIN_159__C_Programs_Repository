// a simple c program to perform various arithmetic operatiions
// iam using switch case because of easy usability of code but it can be executed using various others type of code



#include<stdio.h>
int main(){
    char operator;
    double a, b;
    printf("Enter an operator (+, -, *, /):"); //it will print the arithmetic operator entered by the user 
    scanf("%c", &operator); //It will scan the arithmetic operator entered by the user
    printf("Enter two operands:");
    scanf("%lf %lf",&a, &b); //It will scan the numbers entered by user.
    switch(operator)
    {
        case '+':
            printf("%.2lf + %.2lf = %.2lf",a, b, a+b); //Addition 
            break;

        case '-':
            printf("%.2lf - %.2lf = %.2lf",a, b, a-b); //Subtraction
            break;

        case '*':
            printf("%.2lf * %.2lf = %.2lf",a, b, a*b); //Multiplication
            break;

        case '/':
            printf("%.2lf / %.2lf = %.2lf",a, b, a/b); //Division 
            break;
    printf("Error encountered by the input values");
    }
    return 0;
}
