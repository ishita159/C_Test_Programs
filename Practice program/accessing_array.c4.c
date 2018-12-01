#include<stdio.h>
int main()
{
	int *ptr,i, var[]={100,200,300};
	ptr=var;
	for(i=0;i<3;i++)
	{ 
	   printf("address of the %d element of the array is %d \n",i+1,ptr);
	   printf("value of the element is %d \n\n\n", *ptr);
	   ptr++;
	}
	return 0;
}
