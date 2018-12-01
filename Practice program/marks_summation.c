#include<stdio.h>
int marks_summation(int marks[1000], int number_of_students, char gender)
{
   int i,sum1=0,sum2=0;
   for(i=0;i<number_of_students;i++)
   {
     	if(i%2==0)
	  	{
	  	   sum2+= marks[i];	
	    }
	    else
   	    {
   	  	    sum1+= marks[i];	
	    } 
    } 
	if(gender=='g')
	{
		printf("%d",sum1);
	 } 
	 else
	 {
	 	printf("%d",sum2);
	 }  
   return 0;	
}
int main()
{
	int marks[1000],number_of_students,i;
	char gender;
	scanf("%d",&number_of_students);
	for(i=0;i<number_of_students;i++)
	{
		scanf("%d \n",&marks[i]);
	}
	scanf("%c",&gender);
	marks_summation(marks,number_of_students,gender);
	return 0;
}
