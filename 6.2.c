#include <stdio.h>
#define ZNAK 5

int main(void)
  {
   int n, m;
   for(m=0; m<ZNAK; m++, putchar('\n'))
   {
        for(n=0; n<=m; n++, putchar('$'));
   }
   return 0;
  }
