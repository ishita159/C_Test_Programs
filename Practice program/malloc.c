#include<stdio.h>
int main()
{
	int *ptr,i,n,sum=0;
	printf("enter no of elemnts in array??\n\n\n");
	scanf("%d",&n);
	ptr = (int*) malloc(n*sizeof(int));
	if(ptr == NULL)
	{
		printf("memory not allocated");
		return 0;
	}
	printf("enter array elements");
	for(i=0;i<n;i++)
	{
		scanf("%d", ptr+i);
		sum=sum+*(ptr+1);
	}
	printf("the elements in the array are:");
	for(i=0;i<n;i++)
	{
		printf("%d",ptr[i]);
	}
	free(ptr);
	return 0;
	getchar();
}
