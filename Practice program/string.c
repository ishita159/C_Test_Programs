#include <stdio.h>
 
int main()
{
   char s[100];
   int c = 0;
 
   gets(s);
 
   while (s[c] != '\0') {
      printf("%c", s[c]);
      c++;
   }
 
   return 0;
}
