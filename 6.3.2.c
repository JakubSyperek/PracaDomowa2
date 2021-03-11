#include <stdio.h>
#define LITERY 6

int main(void)
  {
   int n, m;
   for(m=0; m<LITERY; m++, putchar('\n'))
   {
       for(n=0; n<=m; n++, putchar('G' - n));
   }
   return 0;
  }
