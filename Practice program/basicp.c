#include<stdio.h>
void main()
{
	int a=10, *p;
	p=&a;
	printf("value of a and p are: %d and %d  \n\n\n", a, *p);
	printf("address stored in p is: %d", p );
	getchar();
}

