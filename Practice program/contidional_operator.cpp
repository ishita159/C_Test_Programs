#include<stdio.h>
int main()
{
	int a=3,b=5,result, condition;
	printf("Enter 1 for addition and 2 for multiplication");
	scanf("%d",&condition);
    result = (condition==1)?a+b:(condition==2)?a*b:printf("INVALID CHOICE!!");
    if(condition==1 || condition==2)
    printf("the result is %d", result);	
	return 0;	
}
