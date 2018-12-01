#include<stdio.h>
int main()
{
    int a,b,sum,difference;
    float c,d,sum1,difference1;
    scanf("%d %d",&a,&b);
    printf("\n");
    scanf("%f %f",&c,&d);
    if(a<10000||b>1||b<10000||b>1||c<10000||c>1||d<10000||d>1)
    {
        sum=a+b;
        difference=a-b;
        difference=abs(difference);
        sum1=c+d;
        difference1=c-d;
        difference1=fabsf(difference1);
        printf("%d %d\n",sum,difference);
        printf("%0.1f %0.1f",sum1,difference1);
    }
    return 0;
}
