// a simple c programm to find maximumm of numbers
// iam using for lopp and if else case here



#include <stdio.h>
#include <conio.h>

int main()
{
  int i,num,n,large=0;

  //It will set the limit as how many maaximum numbers can be entered by the users
  printf("How many numbers: ");
  scanf("%d",&n); 
  
  for(i=0; i<n; i++)
  {
    //It will scan the numbers entered by user upto the limit setted by user.
    printf("\nEnter number %d: ",i+1);
    scanf("%d",&num);
    if(num>large)
    large=num;
  }

  printf("\nThe Largest number is %d",large); //It will give the largest number as the output.
  
  getch();
  return 0;
}

//It runs best in Windows Powershell.
