#include<stdio.h>
const int MAX=5;
int main()
{
	int A[]={1,2,3,4,5,6,7,8,9};
	int i, *ptr[MAX];
	for(i=0;i<MAX;i++)
	{
	   ptr[i]=&A[i];	
	}
	for(i=0;i<MAX;i++)
	{
		printf("value of A[%d] = %d \n", i,*ptr[i]);
	}
    return 0;
}
