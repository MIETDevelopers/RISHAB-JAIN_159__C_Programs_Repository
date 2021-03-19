//a simple c program to demonstrate fibonacci series.


#include <stdio.h>
int main() {
    int i, n, t1 = 0, t2 = 1, nextTerm;              //used foer the ease of apllication of formula of the series.
    printf("Enter the number of terms: ");
    scanf("%d", &n);                                //this is used to read the numbers input by the user.
    printf("Fibonacci Series: ");

    //iam using for loop here as i understood it better.
    //formula for the series.
    
    for (i = 1; i <= n; ++i) {
        printf("%d, ", t1);
        nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;
    }

    return 0;
}
