//it is a simple c program with array pf structures containing student marks and passing that to functions for execution of various operations
#include <stdio.h>
#include <string.h>
 
struct student 
{
     int id;
     char name[30];
     float percentage;
};
 
int main() 
{
     int i;
     struct student record[3];
 
     // 1st students stored record
     record[0].id=1;
     strcpy(record[0].name, "Ishav");
     record[0].percentage = 99.0;
 
     // 2nd student's stored record    
     record[1].id=2;
     strcpy(record[1].name, "Aditya");
     record[1].percentage = 99.1;
 
     // 3rd student's stored recored
     record[2].id=3;
     strcpy(record[2].name, "Himanish");
     record[2].percentage = 99.2;
 
     for(i=0; i<3; i++)
     {
         printf(" Records of STUDENT : %d \n", i+1);
         printf(" Id is: %d \n", record[i].id);
         printf(" Name is: %s \n", record[i].name);
         printf(" Percentage is: %f\n\n",record[i].percentage);
     }
     return 0;
}
