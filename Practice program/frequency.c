#include<stdio.h>
#include<string.h>
int main()
{
    char inp[1005];
    int i,j, count =0, ans[10];
    fgets(inp, 1000, stdin);
    for(i = 0; i < 10; i++)
    {
        ans[i] = 0;
    }

    /*for(i = 0; i < 10; i++)
    {
        for(j = 0; j<strlen(inp); j++)
        {
            if(i + 48 == inp[j])
            {
                count++;
            }
        }
        ans[i] = count;
        count = 0;
    }*/

    for(j = 0; j < strlen(inp); j++)
    {
         ans[inp[j]-48] += 1;
    }


    for(i = 0; i < 10; i++)
    {
        printf("%d ", ans[i]);
    }
}