#include<stdio.h>
int main()
{
	char *ptr[]={"shantanu","shikhar","neha","prerna"};
	int i;
	for(i=0;i<4;i++)
	{
		printf("the value in araay at position %d = %s\n",i,ptr[i]);
	}
	return 0;
}
