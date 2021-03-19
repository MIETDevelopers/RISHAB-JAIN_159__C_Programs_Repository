//a simple c program to print helo world multiple times as per the need of the user.
// this is done using do while loop.


#include <stdio.h>
int main()
{
    int a = 1;
    while ( a <= 30 )          //it will allow user to print hello world 30 times.
    {
        printf ( "Hello World\n" );    //the desired text to be printed is entered here.
        a ++;
    }
    return 0;
}