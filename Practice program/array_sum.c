#include<iostream>
int reversal(int A[],int n)
{
   int i,sum=0,B[n];
   for(i=n-1;i>=0;i--)	
   {
   	 if(A[i]>=1 && A[i]<=1000)
   	 {
   	   printf("%d ",A[i]);
     }
   }
   return 0;
}
int main()
{
	int n, A[1005],i;
	scanf("%d",&n);
	if(n<=1000 && n>=1)
	{
		for(i=0;i<n;i++)
		{
			scanf("%d",&A[i]);
			
		}
    }
    reversal(A,n);
    return 0;
}
