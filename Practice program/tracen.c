#include<stdio.h>
int main()
{
	int A[3][3], i, j,sum=0, sum1;
	printf("enter 9 araay elements");
	for(i=0;i<3;i++)
	{ 
	  for(j=0;j<3;j++)
	  {
	  	scanf("%d", &A[i][j]);
	  	sum=sum+(A[i][j]*A[i][j]);
	  	if(i==j)
	  	{
	  		sum1=sum1+A[i][j];
		}
	  }
	}
	printf("normal of the matrix is = %d", sum);
	printf("trace of the matrix is = %d", sum1);
    return 0; 
}
