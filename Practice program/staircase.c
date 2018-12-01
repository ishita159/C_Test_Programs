#include<stdio.h>
int staircase(int n)
{
    int i,j,p=n-1,k;
    for(i=0;i<=n;i++)
    {
        for(k=0;k<=p;k++)
        {
            printf(" ");
        }
        p--;
        for(j=0;j<=i;j++)
        {
            printf("%c",'#');
        }
        printf("\n");
    }
    return 0;
}
int main()
{
    int n;
    scanf("%d",&n);
    return staircase(n);
}

