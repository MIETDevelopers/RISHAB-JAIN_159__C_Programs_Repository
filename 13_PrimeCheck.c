// a simple c program to check whether the number is prime or not 
// iam using for loop here with if else statememt




#include <stdio.h>
int main()
{
   int n, i, count = 0;
 
    printf("Enter the Number.\n");
    scanf("%d",&n);//This will read the number entered by the user
 
    for(i=2; i<=n/2; ++i)
    {
        // case for nin prime number
        if(n%i==0)
        {
            count=1;
            break;
        }
    }
    //This will give the output.
    if (count==0)
        printf("%d is a Prime number.",n);
    else
        printf("%d is not a Prime number.",n);
 
    getchar();    
}
