#include<stdio.h>
int fun(int a, int b)
{
	printf("value of a = %d \n\n",a);
	printf("value of b = %d \n\n",b);
	return 0;
}
void main()
{
	int a,b;
	printf("Enter the values of a and b: ");
	scanf("%d %d", &a, &b);
	int(*ptr)(int, int)=&fun;
	printf("calling the function by pointer reference");
	ptr(a,b);
	printf("calling fucntion by name");
	fun(a,b);
}
