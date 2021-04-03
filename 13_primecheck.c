//it is a simple c program to  whether number is prim or not
//iam using do whil loop here.
//iam also using if else case here.


#include <stdio.h>
int main()
{
   int a, i, c=0;
 	printf("Enter number to  prime number or not");
    scanf("%d",&a);                               //to scan input numbers from trhe user
    i=2;
    while( i<=a/2)
    {
        //  for non prime number
        if(a%i==0)
        {
            c=1;
            break;
        }
        i++;
    }
 
    if (c==0)
        printf("%d is a prime number.",a);
    else
        printf("%d is not a prime number.",a);
 
    return 0;
    
}
