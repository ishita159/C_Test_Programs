#include<stdio.h>
int time(int a)
{
	int hh, mm, ss;
    char tt[2];
    scanf("%d:%d:%d%s", &hh, &mm, &ss, tt);
    printf("%d\n", hh);
    if(strcmp(tt, "PM") == 0 && hh != 12) hh += 12;
    if(strcmp(tt, "AM") == 0 && hh == 12) hh = 0;
    printf("%02d:%02d:%02d", hh, mm, ss);
    return 0;
}
int main()
{
	int n=1;
	time(n);
	return 0;
}
