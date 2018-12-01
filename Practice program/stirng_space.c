#include<stdio.h>
#include<string.h>
#define MAX 1000
int sentence()
{
	char A[MAX];
	int i;
	fgets(A,MAX,stdin);
	while(A[i]!='\0')
	{
		if(A[i]==' ')
		{
			printf("\n");
		}
		else
		{
			printf("%c",A[i]);
		}
		i++;
	}
	getch();
	return 0;
}
int main()
{
	sentence();
	return 0;
}
