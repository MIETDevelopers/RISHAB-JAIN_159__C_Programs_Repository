//it is a simple c program to check whether which is the largest number.


#include<stdio.h>
int main(){
  int n,num,i;
  int big;
  
  printf("Enter the values of n: ");
  scanf("%d",&n);                   //it is used to scan the different values of numbers.
 
  printf("Number %d",1);
  scanf("%d",&big);

  for(i=2;i<=n;i++){
    printf("Number %d: ",i);
    scanf("%d",&num);

    if(big<num)
      big=num;
  }
  
  printf("Largest number is: %d",big);    //the output will be largest of the numbers.

  return 0;
}