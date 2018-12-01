#include<stdio.h>
#include<string.h>
const MAX=10;
int main()
{
	char str[MAX];
	fgets(str,MAX,stdin);
	printf("%s", str);
	getchar();
	return 0;
}
