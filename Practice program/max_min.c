#include<stdio.h>
int max_min()
{
	int A[5],n,i,j,max,min,sum;
	for(i=0;i<5;i++)
	{
		scanf("%d",&A[i]);
	}
	max=A[0];
	min=A[0];
	for(i=0;i<5;i++)
	{
		if(A[i]>max)
        {
        	max=A[i];
		}
		if(A[i]<min)
		{ 
		    min=A[i];	
		}
	}
	for(i=0;i<5;i++)
	{
		sum=sum+A[i];
	}
	printf("%d\n\n",sum-max);
	printf("%d",sum-min);
	return 0;
}
int main()
{
	max_min();
	return 0;
}
