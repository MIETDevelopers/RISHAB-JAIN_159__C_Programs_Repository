#include <stdio.h>
void displayString(char str[]);

int main()
{
    char str[50];
    printf("Enter String: \n");
    fgets(str, sizeof(str), stdin);       
    displayString(str);        
    return 0;
}
void displayString(char str[])
{
	//This will give output.
    printf("String Output: ");
    puts(str);
} 