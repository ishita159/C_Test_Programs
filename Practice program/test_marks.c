#include<stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int marks_summation(int* marks,int number_of_students, char gender)
{
    int i,sum1=0,sum2=0;
   for(i=0;i<number_of_students;i++)
   {
         if(i%2==0)
          {
             sum2+= *(marks+i);    
        }
        else
           {
                 sum1+= *(marks+i);    
        } 
    } 
    if(gender=='g')
    {
        return sum2;
     } 
     else
     {
         return sum1;
     }  
   return 0;    
}
int main() {
    int number_of_students;
    char gender;
    int sum;
    int student;
    scanf("%d", &number_of_students);
    int *marks = (int *) malloc(number_of_students * sizeof (int));
 
    for ( student = 0; student < number_of_students; student++) {
        scanf("%d", (marks + student));
    }
    
    scanf(" %c", &gender);
    sum = marks_summation(marks, number_of_students, gender);
    printf("%d", sum);
    free(marks);
 
    return 0;
}
