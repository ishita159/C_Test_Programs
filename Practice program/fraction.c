#include<stdio.h>
int fraction(int A[],int n)
{
	int i;
	float neg=0,pos=0,zero=0;
	for(i=0;i<n;i++)
	{
		if(A[i]<0)
		{
			neg++;
		}
		if(A[i]>0)
		{
			pos++;
		}
		if(A[i]==0)
		{
			zero++;
		}
	}
	
	printf("%fl \n %fl \n %fl \n",pos/n,neg/n,zero/n);
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
	return fraction(A,n);	
}

