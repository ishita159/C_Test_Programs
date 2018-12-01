#include<stdio.h>
int sum_of_digits()
{
	int num,sum;
	scanf("%d",&num);
	if(num>=10000 && num<=99999)
	{
	while(num>0)
	{
		sum = sum + (num%10);
		num = num/10;
	}
    }
    printf("%d",sum);
    return 0;
}
int main()
{
	sum_of_digits();
	return 0;
}
