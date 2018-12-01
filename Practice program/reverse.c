#include<stdio.h>
int main()
{
	int a[5], b[5], i, j;
    for(i=0;i<5;i++)
    	scanf("%d",&a[i]);
		for(i=0,j=4;i<5;j--,i++)
	{
		b[j]= a[i];
		
	}
	for(j=0;j<5;j++)
    {
    	printf("%d",b[j]);
    	
	}
	return 0;
}
