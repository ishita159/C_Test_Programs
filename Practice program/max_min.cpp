#include<stdio.h>
int max_min()
{
	int A[],n,i,j,max,min,sum
	for(i=0;i<n;i++)
	{
		scanf("%d",&A[i]);
	}
	for(i=0;i<n;i++)
	{
		if(A[i]>A[i+1])
        {
        	A[i]=max;
		}
		if(A[i]<A[i+1])
		{ 
		    A[i]=min;	
		}
	}
	for(i=0;i<n;i++)
	{
		sum=sum+A[i];
	}
	printf("%d",sum-max);
	printf("%d",sum-min);
	return 0;
}
