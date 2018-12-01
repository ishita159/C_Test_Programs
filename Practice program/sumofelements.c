#include<stdio.h>
int main()
{
	int i,sum,a[5];
	for(i=0;i<5;i++)
	scanf("%d",&a[i]);
	sum=0;
	for(i=0;i<5;i++)
	{
		sum=sum+a[i];
    }  
		printf("sum=%d",sum);
			
}

