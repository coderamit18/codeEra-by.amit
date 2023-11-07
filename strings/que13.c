#include <stdio.h>
int main()
{
   char s[50], r[50];
   int i, k, count = 0;

   printf("Input a string\n");
   gets(s);

   while (s[count] != '\0')
      count++;

   k = count - 1;

   for (i = 0; i < count; i++) {
      r[i] = s[k];
      k--;
   }

   r[i] = '\0';

   printf("Reversed string : %s\n", r);

   return 0;
}