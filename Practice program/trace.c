#include<stdio.h>
void trace(int* X);
int main()
{
	int A[3][3], i, j;
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
		scanf("%d%d", &A[i][j]);
     	}
	}
	trace(A);
}


