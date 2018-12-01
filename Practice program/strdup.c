#include<string.h>
#include<stdio.h>
int main()
{
	char source[10]={"happy life"};
	char* target =strdup(source);
	char* target2 = strndup(source, 5); 
	printf("%s",target);
	printf("%s",target2); 
}
