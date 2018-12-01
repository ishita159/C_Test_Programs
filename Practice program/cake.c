#include<stdio.h>
int cake(int A[],int n)
{
	int i,max,count=0;
	max=A[0];
	for(i=0;i<n;i++)
	{
		if(A[i]>max)
		max=A[i];
	}
	for(i=0;i<n;i++)
	{
	    if(A[i]==max)
		{
			 count++;
	    }	
	}
	printf("%d", count);
	return 0;
}
int main()
{
	int A[10],i,n;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&A[i]);
	}
	cake(A,n);
	return 0;	
}
